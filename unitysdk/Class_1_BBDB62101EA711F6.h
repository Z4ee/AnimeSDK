#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BBDB62101EA711F6_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x165B2710)
#define CLASS_1_BBDB62101EA711F6_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x165B2EE0)
#define CLASS_1_BBDB62101EA711F6_METHOD_1_7710A7FAEA2B7D96_OFFSET UNITYSDK_OFFSET(0x165B2C10)
#define CLASS_1_BBDB62101EA711F6_METHOD_1_AF7CACDCD9A63EB1_OFFSET UNITYSDK_OFFSET(0x165B2F30)
#define CLASS_1_BBDB62101EA711F6_METHOD_1_F02369B32601361A_OFFSET UNITYSDK_OFFSET(0x165B25A0)

inline static constexpr unsigned int Class_1_BBDB62101EA711F6_TypeDefinitionIndex = 75712;

class Class_1_BBDB62101EA711F6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>** StaticGet_BKEJEPKOLDO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBDB62101EA711F6_TypeDefinitionIndex)->GetStaticField(0x6B9F0);
	}

	static ::System::Boolean Method_1_F02369B32601361A(::System::UInt32 a1, ::RPG::Client::Pet::IPet*& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::Pet::IPet*&))((::PBYTE)hIl2Cpp + CLASS_1_BBDB62101EA711F6_METHOD_1_F02369B32601361A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_7710A7FAEA2B7D96(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBDB62101EA711F6_METHOD_1_7710A7FAEA2B7D96_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBDB62101EA711F6_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBDB62101EA711F6_METHOD_1_218124418542E081_OFFSET))();
	}

	static ::System::Void Method_1_AF7CACDCD9A63EB1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>* a1, ::System::UInt32 a2, ::RPG::Client::Pet::PetIdentifier a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>*, ::System::UInt32, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_BBDB62101EA711F6_METHOD_1_AF7CACDCD9A63EB1_OFFSET))(a1, a2, a3);
	}
};
