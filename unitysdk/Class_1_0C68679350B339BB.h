#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_A6F8D19602712D95;

#define CLASS_1_0C68679350B339BB_METHOD_1_B233860B4C64810E_OFFSET UNITYSDK_OFFSET(0x12F13450)
#define CLASS_1_0C68679350B339BB_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x12F135D0)
#define CLASS_1_0C68679350B339BB_METHOD_1_DBAF50518B383E19_OFFSET UNITYSDK_OFFSET(0x12F13440)
#define CLASS_1_0C68679350B339BB_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x12F13660)
#define CLASS_1_0C68679350B339BB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12F13430)
#define CLASS_1_0C68679350B339BB__CTOR_OFFSET UNITYSDK_OFFSET(0x12F13420)

inline static constexpr unsigned int Class_1_0C68679350B339BB_TypeDefinitionIndex = 88397;

class Class_1_0C68679350B339BB : public ::System::Object
{
public:
	::Class_5_A6F8D19602712D95* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor(::Class_5_A6F8D19602712D95* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0C68679350B339BB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C68679350B339BB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_5_A6F8D19602712D95* Method_1_DBAF50518B383E19()
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C68679350B339BB_METHOD_1_DBAF50518B383E19_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_B233860B4C64810E(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0C68679350B339BB_METHOD_1_B233860B4C64810E_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C68679350B339BB_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C68679350B339BB_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
