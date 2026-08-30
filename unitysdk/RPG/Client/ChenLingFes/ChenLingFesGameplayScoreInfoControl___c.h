#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B735230)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B735270)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_2_OFFSET UNITYSDK_OFFSET(0x1B735280)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_5_OFFSET UNITYSDK_OFFSET(0x1B7352E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_8_OFFSET UNITYSDK_OFFSET(0x1B735340)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayScoreInfoControl___c_TypeDefinitionIndex = 79994;

	class ChenLingFesGameplayScoreInfoControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayScoreInfoControl___c_TypeDefinitionIndex)->GetStaticField(0x3D430);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__3_5()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayScoreInfoControl___c_TypeDefinitionIndex)->GetStaticField(0x3D438);
		}
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreInfoControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayScoreInfoControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayScoreInfoControl___c_TypeDefinitionIndex)->GetStaticField(0x3D440);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__3_8()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayScoreInfoControl___c_TypeDefinitionIndex)->GetStaticField(0x3D448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::String* __OnBindViewModel_b__3_2(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_2_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__3_5(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_5_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__3_8(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_8_OFFSET))(this, a1);
		}
	};
}
