#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1342B57709FD7AC5;

#define RPG_CLIENT_CHENLINGFESMODELVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB634DD0)
#define RPG_CLIENT_CHENLINGFESMODELVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xB634CE0)
#define RPG_CLIENT_CHENLINGFESMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB634E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingFesModelView_TypeDefinitionIndex = 57462;

	class ChenLingFesModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_1342B57709FD7AC5* _RendererCache; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODELVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetDitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODELVIEW_SETDITHERALPHA_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODELVIEW_ONDESTROY_OFFSET))(this);
		}
	};
}
