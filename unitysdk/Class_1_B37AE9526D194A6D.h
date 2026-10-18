#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5D22E672620F4553.h"
#include "unitysdk/System/Object.h"

class Class_1_0F24EAFEC305197B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B37AE9526D194A6D_METHOD_1_6CB757A467A3E56C_OFFSET UNITYSDK_OFFSET(0xB2238C0)
#define CLASS_1_B37AE9526D194A6D_METHOD_1_D6029ACE2802BB0A_OFFSET UNITYSDK_OFFSET(0xB223990)
#define CLASS_1_B37AE9526D194A6D_METHOD_1_D9499EDDFA9C03D8_OFFSET UNITYSDK_OFFSET(0xB223700)
#define CLASS_1_B37AE9526D194A6D__CTOR_OFFSET UNITYSDK_OFFSET(0xB223A90)

inline static constexpr unsigned int Class_1_B37AE9526D194A6D_TypeDefinitionIndex = 72054;

class Class_1_B37AE9526D194A6D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_5D22E672620F4553>* BMMBDPIHHON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B37AE9526D194A6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D9499EDDFA9C03D8(::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>*))((::PBYTE)hIl2Cpp + CLASS_1_B37AE9526D194A6D_METHOD_1_D9499EDDFA9C03D8_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_6CB757A467A3E56C()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B37AE9526D194A6D_METHOD_1_6CB757A467A3E56C_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_D6029ACE2802BB0A()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B37AE9526D194A6D_METHOD_1_D6029ACE2802BB0A_OFFSET))(this);
	}
};
