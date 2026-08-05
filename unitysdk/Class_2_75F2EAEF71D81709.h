#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_984AA59ECF07A77D_Enum_3_8F7F347952F467D6.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_75F2EAEF71D81709_METHOD_2_3BF9B67F74EEB9FA_OFFSET UNITYSDK_OFFSET(0x12CFABA0)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_669CABF5293E2465_OFFSET UNITYSDK_OFFSET(0x12CFA150)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_D755E659050F5CB6_OFFSET UNITYSDK_OFFSET(0x12CFA8D0)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x12CFA780)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_F5374DE32DAE2B81_OFFSET UNITYSDK_OFFSET(0x12CFA820)
#define CLASS_2_75F2EAEF71D81709__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFA730)

inline static constexpr unsigned int Class_2_75F2EAEF71D81709_TypeDefinitionIndex = 57453;

class Class_2_75F2EAEF71D81709 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x60
	::UnityEngine::GameObject* Field_2_5; // 0x68
	::UnityEngine::GameObject* Field_2_0; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_669CABF5293E2465(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_669CABF5293E2465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5374DE32DAE2B81(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_F5374DE32DAE2B81_OFFSET))(this, a1);
	}

	::System::Void Method_2_D755E659050F5CB6(::Class_2_984AA59ECF07A77D_Enum_3_8F7F347952F467D6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_984AA59ECF07A77D_Enum_3_8F7F347952F467D6))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_D755E659050F5CB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BF9B67F74EEB9FA(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_3BF9B67F74EEB9FA_OFFSET))(this, a1);
	}
};
