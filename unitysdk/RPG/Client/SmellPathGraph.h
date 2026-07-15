#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7EB6F0B72CD25094;
namespace RPG::GameCore { class PropSmellPathComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SMELLPATHGRAPH_FADEOUT_OFFSET UNITYSDK_OFFSET(0x18905CF0)
#define RPG_CLIENT_SMELLPATHGRAPH_GETDIJKSTRAPATH_OFFSET UNITYSDK_OFFSET(0x18905D40)
#define RPG_CLIENT_SMELLPATHGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x18905BF0)
#define RPG_CLIENT_SMELLPATHGRAPH_REFRESH_OFFSET UNITYSDK_OFFSET(0x18905C70)
#define RPG_CLIENT_SMELLPATHGRAPH_UNINIT_OFFSET UNITYSDK_OFFSET(0x18905DB0)
#define RPG_CLIENT_SMELLPATHGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x18905E10)

namespace RPG::Client
{
	inline static constexpr unsigned int SmellPathGraph_TypeDefinitionIndex = 58217;

	class SmellPathGraph : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_7EB6F0B72CD25094* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::PropSmellPathComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSmellPathComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_INIT_OFFSET))(this, a1);
		}

		::System::Void Refresh(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_REFRESH_OFFSET))(this, a1);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_FADEOUT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetDijkstraPath()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_GETDIJKSTRAPATH_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_UNINIT_OFFSET))(this);
		}
	};
}
