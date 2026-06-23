#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_238C3FC2095C13FE;
class Class_2_208CC9941471731A_667;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F917E6A82EC2580_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x1AFC4750)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_84E04E7F500E5788_OFFSET UNITYSDK_OFFSET(0x1AFC4FD0)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_C4C8D8CD17BA1992_OFFSET UNITYSDK_OFFSET(0x1AFC4710)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_DC2CCEA1A7E9DE76_OFFSET UNITYSDK_OFFSET(0x1AFC50A0)
#define CLASS_1_4F917E6A82EC2580_METHOD_1_F9E939D4E9AAE0E2_OFFSET UNITYSDK_OFFSET(0x1AFC4E10)
#define CLASS_1_4F917E6A82EC2580__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC4680)

inline static constexpr unsigned int Class_1_4F917E6A82EC2580_TypeDefinitionIndex = 13441;

class Class_1_4F917E6A82EC2580 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_667*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C4C8D8CD17BA1992(::Class_2_208CC9941471731A_667* a1, ::Class_2_208CC9941471731A_667* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_667*, ::Class_2_208CC9941471731A_667*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_C4C8D8CD17BA1992_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_238C3FC2095C13FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_238C3FC2095C13FE*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_667*>* Method_1_84E04E7F500E5788(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_667*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_667*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_667*>*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_84E04E7F500E5788_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DC2CCEA1A7E9DE76(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_667*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_667*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_DC2CCEA1A7E9DE76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F9E939D4E9AAE0E2(::Class_2_208CC9941471731A_667* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_667*))((::PBYTE)hIl2Cpp + CLASS_1_4F917E6A82EC2580_METHOD_1_F9E939D4E9AAE0E2_OFFSET))(this, a1);
	}
};
