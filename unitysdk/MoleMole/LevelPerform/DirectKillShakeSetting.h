#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4E1FD763A8B8D9C6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_ASSIGN_OFFSET UNITYSDK_OFFSET(0x12623E90)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_LOCATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x12623DF0)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x12623E10)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_HASVALIDDATA_OFFSET UNITYSDK_OFFSET(0x12623F70)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x12623FF0)
#define MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x12623FE0)

namespace MoleMole::LevelPerform
{
	inline static constexpr unsigned int DirectKillShakeSetting_TypeDefinitionIndex = 60491;

	class DirectKillShakeSetting : public ::System::Object
	{
	public:
		static ::MoleMole::LevelPerform::DirectKillShakeSetting** StaticGet_Fallback()
		{
			return (::MoleMole::LevelPerform::DirectKillShakeSetting**)Il2CppClass::FromTypeDefinitionIndex(DirectKillShakeSetting_TypeDefinitionIndex)->GetStaticField(0x307F0);
		}
		::System::String* sharedShakeCurve; // 0x10
		::System::String* rollShakeCurve; // 0x18
		::System::Single upShakeOffset; // 0x20
		::System::Single pitchShakeOffset; // 0x24
		::System::Single rollShakeOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_locationOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_LOCATIONOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_rotationOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_GET_ROTATIONOFFSET_OFFSET))(this);
		}

		::System::Void Assign(::Struct_2_4E1FD763A8B8D9C6& config)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_4E1FD763A8B8D9C6&))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_ASSIGN_OFFSET))(this, config);
		}

		::System::Boolean HasValidData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_DIRECTKILLSHAKESETTING_HASVALIDDATA_OFFSET))(this);
		}
	};
}
