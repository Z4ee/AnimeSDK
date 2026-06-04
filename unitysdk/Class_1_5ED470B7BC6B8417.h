#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

class Class_1_5ED470B7BC6B8417_Class_1_0AF4E2D5648B3AA3;
class Class_1_5ED470B7BC6B8417_Class_1_C5CF611194827763;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_5ED470B7BC6B8417_METHOD_1_004953A97DFBB47B_OFFSET UNITYSDK_OFFSET(0xAC80110)
#define CLASS_1_5ED470B7BC6B8417_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xAC80940)
#define CLASS_1_5ED470B7BC6B8417_METHOD_1_705114C1217C42A7_OFFSET UNITYSDK_OFFSET(0xAC80D20)
#define CLASS_1_5ED470B7BC6B8417_METHOD_1_7A5A400D5EEF98BA_OFFSET UNITYSDK_OFFSET(0xAC803B0)
#define CLASS_1_5ED470B7BC6B8417_METHOD_1_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0xAC80E70)
#define CLASS_1_5ED470B7BC6B8417_METHOD_1_FF24156B8A7DD24B_OFFSET UNITYSDK_OFFSET(0xAC80520)
#define CLASS_1_5ED470B7BC6B8417__CTOR_OFFSET UNITYSDK_OFFSET(0xAC81200)

inline static constexpr unsigned int Class_1_5ED470B7BC6B8417_TypeDefinitionIndex = 46446;

class Class_1_5ED470B7BC6B8417 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5ED470B7BC6B8417_Class_1_C5CF611194827763*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5ED470B7BC6B8417_Class_1_0AF4E2D5648B3AA3*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417__CTOR_OFFSET))(this);
	}

	::Class_1_5ED470B7BC6B8417_Class_1_C5CF611194827763* Method_1_004953A97DFBB47B(::System::String* a1, ::System::Action_1<::UnityEngine::Object*>* a2)
	{
		return ((::Class_1_5ED470B7BC6B8417_Class_1_C5CF611194827763*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417_METHOD_1_004953A97DFBB47B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A5A400D5EEF98BA(::System::String* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417_METHOD_1_7A5A400D5EEF98BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF24156B8A7DD24B(::System::String* a1, ::System::Action_1<::UnityEngine::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417_METHOD_1_FF24156B8A7DD24B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Single Method_1_705114C1217C42A7(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417_METHOD_1_705114C1217C42A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417_METHOD_1_F7810952FE14E15C_OFFSET))(this);
	}
};
