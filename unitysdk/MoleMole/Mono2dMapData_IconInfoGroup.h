#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Mono2dMapData_IconInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x13F0BCB0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x13F0AA30)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x13F0BEE0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_E876C8B6D3B840A6_1_OFFSET UNITYSDK_OFFSET(0x13F0BF60)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x13F0B010)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0A9A0)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_TypeDefinitionIndex = 67192;

	class Mono2dMapData_IconInfoGroup : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* ContentRoot; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Mono2dMapData_IconInfo*>* IconInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* _iconRects; // 0x20
		::Enum_3_6A96CF8852C977C2 IconType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Void Method_1_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Void Method_1_025E4B1A2211CF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_025E4B1A2211CF52_OFFSET))(this);
		}

		::System::Void Method_1_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
		}

		::System::Void Method_1_E876C8B6D3B840A6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_METHOD_1_E876C8B6D3B840A6_1_OFFSET))(this);
		}
	};
}
