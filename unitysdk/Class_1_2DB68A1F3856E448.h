#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DelayNotifyTiming.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_AFA032BCA5DAB27D;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_2DB68A1F3856E448_METHOD_1_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1596F660)
#define CLASS_1_2DB68A1F3856E448_METHOD_1_26FAC37FCDEB0992_OFFSET UNITYSDK_OFFSET(0x1596F8A0)
#define CLASS_1_2DB68A1F3856E448_METHOD_1_3F6604ADDB19E59F_OFFSET UNITYSDK_OFFSET(0x1596FA40)
#define CLASS_1_2DB68A1F3856E448_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1596F780)
#define CLASS_1_2DB68A1F3856E448_METHOD_1_B386444429A36A77_1_OFFSET UNITYSDK_OFFSET(0x1596FAD0)
#define CLASS_1_2DB68A1F3856E448_METHOD_1_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x1596F9D0)
#define CLASS_1_2DB68A1F3856E448__CCTOR_OFFSET UNITYSDK_OFFSET(0x1596FB40)

inline static constexpr unsigned int Class_1_2DB68A1F3856E448_TypeDefinitionIndex = 62281;

class Class_1_2DB68A1F3856E448 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>** StaticGet_ILDGNOBOEOA()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DB68A1F3856E448_TypeDefinitionIndex)->GetStaticField(0x56990);
	}
	static ::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>** StaticGet_HBBFNNKHKBE()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DB68A1F3856E448_TypeDefinitionIndex)->GetStaticField(0x56998);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DB68A1F3856E448__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1B167429A8B82AD3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DB68A1F3856E448_METHOD_1_1B167429A8B82AD3_OFFSET))();
	}

	static ::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2DB68A1F3856E448_METHOD_1_9DE87B16AD0A605E_OFFSET))();
	}

	static ::System::Void Method_1_26FAC37FCDEB0992(::RPG::Client::DelayNotifyTiming a1, ::RPG::Client::NotifyType a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::RPG::Client::DelayNotifyTiming, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2DB68A1F3856E448_METHOD_1_26FAC37FCDEB0992_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2DB68A1F3856E448_METHOD_1_B386444429A36A77_OFFSET))(a1);
	}

	static ::System::Void Method_1_B386444429A36A77_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2DB68A1F3856E448_METHOD_1_B386444429A36A77_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_3F6604ADDB19E59F(::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Queue_1<::Class_1_AFA032BCA5DAB27D*>*))((::PBYTE)hIl2Cpp + CLASS_1_2DB68A1F3856E448_METHOD_1_3F6604ADDB19E59F_OFFSET))(a1);
	}
};
