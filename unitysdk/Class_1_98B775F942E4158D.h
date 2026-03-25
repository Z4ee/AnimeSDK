#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98B775F942E4158D_Struct_2_C46B34CEFAB39254.h"
#include "unitysdk/RPG/Client/AssetSystem/MarkerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_62;
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_98B775F942E4158D_METHOD_1_29C2262741B50B2F_OFFSET UNITYSDK_OFFSET(0x164D7B20)
#define CLASS_1_98B775F942E4158D_METHOD_1_556404A13BD0221F_OFFSET UNITYSDK_OFFSET(0x164D7810)
#define CLASS_1_98B775F942E4158D_METHOD_1_768AEA1F4983475F_OFFSET UNITYSDK_OFFSET(0x164D78D0)
#define CLASS_1_98B775F942E4158D__CCTOR_OFFSET UNITYSDK_OFFSET(0x164D7BF0)

inline static constexpr unsigned int Class_1_98B775F942E4158D_TypeDefinitionIndex = 32156;

class Class_1_98B775F942E4158D : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_1_98B775F942E4158D_Struct_2_C46B34CEFAB39254>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_1_98B775F942E4158D_Struct_2_C46B34CEFAB39254>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98B775F942E4158D_TypeDefinitionIndex)->GetStaticField(0x40E50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D__CCTOR_OFFSET))();
	}

	static ::System::Collections::IEnumerable* Method_1_556404A13BD0221F(::RPG::Client::AssetSystem::MarkerType a1, ::Class_0_16E4307DCC419505_62* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Collections::IEnumerable*(*)(::RPG::Client::AssetSystem::MarkerType, ::Class_0_16E4307DCC419505_62*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D_METHOD_1_556404A13BD0221F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::IEnumerable* Method_1_768AEA1F4983475F(::System::String* a1, ::Class_0_16E4307DCC419505_62* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Collections::IEnumerable*(*)(::System::String*, ::Class_0_16E4307DCC419505_62*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D_METHOD_1_768AEA1F4983475F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::IEnumerable* Method_1_29C2262741B50B2F(::RPG::Client::AssetSystem::AssetLoader* a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::Il2CppArray<::System::Object*>* a5)
	{
		return ((::System::Collections::IEnumerable*(*)(::RPG::Client::AssetSystem::AssetLoader*, ::System::Boolean, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_98B775F942E4158D_METHOD_1_29C2262741B50B2F_OFFSET))(a1, a2, a3, a4, a5);
	}
};
