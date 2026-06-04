#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5436AF4270279182;
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETFORMATTEDTEXT_OFFSET UNITYSDK_OFFSET(0xB62C150)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETTARGETENTITYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xB62AB80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xB62C7D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GET_ISVALUEUP_OFFSET UNITYSDK_OFFSET(0xB62C260)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB629DE0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastRequestViewModel_TypeDefinitionIndex = 74065;

	class ChenLingFesToastRequestViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* PrefabPath; // 0x20
		::System::String* Text; // 0x28
		::Class_2_5436AF4270279182* TargetEntity; // 0x30
		::System::String* IconPath; // 0x38
		::RPG::GameCore::ChenLingFesToastStyleType ToastStyleType; // 0x40
		::RPG::GameCore::ChenLingFesDialogStyleType DialogStyleType; // 0x44
		::System::Boolean IsFollowTargetEntity; // 0x48
		::System::Boolean IsHideRequest; // 0x49
		::System::Boolean IsSpecial; // 0x4A
		::System::Single Duration; // 0x4C
		::System::Int32 TargetRuntimeID; // 0x50
		::RPG::Client::TextID TextID; // 0x58
		::UnityEngine::Vector3 WorldPosition; // 0x68
		::System::Single DynamicValue; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::String* GetFormattedText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETFORMATTEDTEXT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETWORLDPOSITION_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetTargetEntityWorldPosition(::Class_2_5436AF4270279182* a1)
		{
			return ((::UnityEngine::Vector3(*)(::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETTARGETENTITYWORLDPOSITION_OFFSET))(a1);
		}

		::System::Boolean get_IsValueUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GET_ISVALUEUP_OFFSET))(this);
		}
	};
}
