#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_208F86C6FC69A766;
class Class_2_208CC9941471731A_422;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6D17A92E4F636970_CLASS_1_BCA6A55E83A9AB50_26_METHOD_1_4EAC49B2567EAA97_OFFSET UNITYSDK_OFFSET(0xEA9ADB0)
#define CLASS_1_6D17A92E4F636970_CLASS_1_BCA6A55E83A9AB50_26_METHOD_1_58D0CBD885BBA17E_OFFSET UNITYSDK_OFFSET(0xEA9B3D0)
#define CLASS_1_6D17A92E4F636970_CLASS_1_BCA6A55E83A9AB50_26__CTOR_OFFSET UNITYSDK_OFFSET(0xEA9ADA0)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Class_1_BCA6A55E83A9AB50_26_TypeDefinitionIndex = 82587;

class Class_1_6D17A92E4F636970_Class_1_BCA6A55E83A9AB50_26 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_BCA6A55E83A9AB50_26__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_208F86C6FC69A766*>* Method_1_4EAC49B2567EAA97()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_208F86C6FC69A766*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_BCA6A55E83A9AB50_26_METHOD_1_4EAC49B2567EAA97_OFFSET))(this);
	}

	::System::Boolean Method_1_58D0CBD885BBA17E(::Class_2_208CC9941471731A_422* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_422*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_BCA6A55E83A9AB50_26_METHOD_1_58D0CBD885BBA17E_OFFSET))(this, a1);
	}
};
