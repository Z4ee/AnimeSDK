#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DelayNotifyTiming.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_AFA032BCA5DAB27D;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_66AEEB0CC532087E_METHOD_1_3F6604ADDB19E59F_OFFSET UNITYSDK_OFFSET(0x10508EC0)
#define CLASS_1_66AEEB0CC532087E_METHOD_1_53D50926B1AC5CC6_OFFSET UNITYSDK_OFFSET(0x10508C70)
#define CLASS_1_66AEEB0CC532087E_METHOD_1_852DA9689096F876_OFFSET UNITYSDK_OFFSET(0x104F4FD0)
#define CLASS_1_66AEEB0CC532087E_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x10508D60)
#define CLASS_1_66AEEB0CC532087E_METHOD_1_B386444429A36A77_1_OFFSET UNITYSDK_OFFSET(0x10508F50)
#define CLASS_1_66AEEB0CC532087E_METHOD_1_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x10508E50)
#define CLASS_1_66AEEB0CC532087E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10508FC0)

inline static constexpr unsigned int Class_1_66AEEB0CC532087E_TypeDefinitionIndex = 50505;

class Class_1_66AEEB0CC532087E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66AEEB0CC532087E_TypeDefinitionIndex)->GetStaticField(0x17660);
	}
	static ::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66AEEB0CC532087E_TypeDefinitionIndex)->GetStaticField(0x17668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66AEEB0CC532087E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_53D50926B1AC5CC6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66AEEB0CC532087E_METHOD_1_53D50926B1AC5CC6_OFFSET))();
	}

	static ::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66AEEB0CC532087E_METHOD_1_9DE87B16AD0A605E_OFFSET))();
	}

	static ::System::Void Method_1_852DA9689096F876(::RPG::Client::DelayNotifyTiming a1, ::RPG::Client::NotifyType a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::RPG::Client::DelayNotifyTiming, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66AEEB0CC532087E_METHOD_1_852DA9689096F876_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66AEEB0CC532087E_METHOD_1_B386444429A36A77_OFFSET))(a1);
	}

	static ::System::Void Method_1_B386444429A36A77_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66AEEB0CC532087E_METHOD_1_B386444429A36A77_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_3F6604ADDB19E59F(::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>*))((::PBYTE)hIl2Cpp + CLASS_1_66AEEB0CC532087E_METHOD_1_3F6604ADDB19E59F_OFFSET))(a1);
	}
};
