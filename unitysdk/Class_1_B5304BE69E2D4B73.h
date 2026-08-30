#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B5304BE69E2D4B73_Class_3_A09093250D8C682A;
namespace RPG::Client { class NetPacket; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B5304BE69E2D4B73_METHOD_1_89DFCAC1ECC61A7F_OFFSET UNITYSDK_OFFSET(0xD2C9300)
#define CLASS_1_B5304BE69E2D4B73__CCTOR_OFFSET UNITYSDK_OFFSET(0xD296290)

inline static constexpr unsigned int Class_1_B5304BE69E2D4B73_TypeDefinitionIndex = 59439;

class Class_1_B5304BE69E2D4B73 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_B5304BE69E2D4B73_Class_3_A09093250D8C682A*>** StaticGet_IBBEEEIHJEJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_B5304BE69E2D4B73_Class_3_A09093250D8C682A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5304BE69E2D4B73_TypeDefinitionIndex)->GetStaticField(0x634D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B5304BE69E2D4B73__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_89DFCAC1ECC61A7F(::RPG::Client::NetPacket* a1, ::System::Object*& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::NetPacket*, ::System::Object*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_B5304BE69E2D4B73_METHOD_1_89DFCAC1ECC61A7F_OFFSET))(a1, a2, a3);
	}
};
