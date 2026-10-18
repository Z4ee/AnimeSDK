#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xE34F120)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE34F380)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77__CCTOR_OFFSET UNITYSDK_OFFSET(0xE34F3D0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77__CTOR_OFFSET UNITYSDK_OFFSET(0xE34EDB0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleNPCView_Class_1_F16F4B18C8432A77_TypeDefinitionIndex = 75773;

	class ChimeraBattleNPCView_Class_1_F16F4B18C8432A77 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_HEOKJKOGNBK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleNPCView_Class_1_F16F4B18C8432A77_TypeDefinitionIndex)->GetStaticField(0x93A0);
		}
		::UnityEngine::Transform* EONPIKNFCDF; // 0x10
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18
		::UnityEngine::Vector3 DEIMGIGLHLK; // 0x20

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77__CCTOR_OFFSET))();
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_CLASS_1_F16F4B18C8432A77_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
