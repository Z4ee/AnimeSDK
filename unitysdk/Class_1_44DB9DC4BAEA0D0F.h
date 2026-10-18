#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_44DB9DC4BAEA0D0F_METHOD_1_2808DB5CF36400BD_OFFSET UNITYSDK_OFFSET(0xB1999F0)
#define CLASS_1_44DB9DC4BAEA0D0F_METHOD_1_B286F077E68D7A11_OFFSET UNITYSDK_OFFSET(0xB1999B0)
#define CLASS_1_44DB9DC4BAEA0D0F__CCTOR_OFFSET UNITYSDK_OFFSET(0xB199A40)
#define CLASS_1_44DB9DC4BAEA0D0F__CTOR_OFFSET UNITYSDK_OFFSET(0xB1999A0)

inline static constexpr unsigned int Class_1_44DB9DC4BAEA0D0F_TypeDefinitionIndex = 75710;

class Class_1_44DB9DC4BAEA0D0F : public ::System::Object
{
public:
	static ::Class_1_44DB9DC4BAEA0D0F** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_44DB9DC4BAEA0D0F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44DB9DC4BAEA0D0F_TypeDefinitionIndex)->GetStaticField(0xFC90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44DB9DC4BAEA0D0F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44DB9DC4BAEA0D0F__CCTOR_OFFSET))();
	}

	::RPG::Client::Pet::PetSummonStateType Method_1_B286F077E68D7A11()
	{
		return ((::RPG::Client::Pet::PetSummonStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44DB9DC4BAEA0D0F_METHOD_1_B286F077E68D7A11_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* Method_1_2808DB5CF36400BD()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44DB9DC4BAEA0D0F_METHOD_1_2808DB5CF36400BD_OFFSET))(this);
	}
};
