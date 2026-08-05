#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_2F21F96DCA41A511_EQUALS_OFFSET UNITYSDK_OFFSET(0x16F61B70)
#define CLASS_1_2F21F96DCA41A511_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16F61B30)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x16F62FA0)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_2611DFA46643D8B0_OFFSET UNITYSDK_OFFSET(0x16F62560)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_3375F7CF05902EFF_OFFSET UNITYSDK_OFFSET(0x16F62240)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_62DF1EBE90234E13_OFFSET UNITYSDK_OFFSET(0x16F620B0)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x16F61C90)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_6F090B6C4B6D1200_OFFSET UNITYSDK_OFFSET(0x16F62CE0)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_858D39F9CB5879BF_1_OFFSET UNITYSDK_OFFSET(0x16F62BC0)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_858D39F9CB5879BF_OFFSET UNITYSDK_OFFSET(0x16F62110)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_978DEB991218B150_OFFSET UNITYSDK_OFFSET(0x16F620A0)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_C5BF16F333063C88_OFFSET UNITYSDK_OFFSET(0x16F62960)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16F62F90)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x16F62230)
#define CLASS_1_2F21F96DCA41A511_METHOD_1_ECA92A315EE474D4_OFFSET UNITYSDK_OFFSET(0x16F61CE0)
#define CLASS_1_2F21F96DCA41A511_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16F61C10)
#define CLASS_1_2F21F96DCA41A511__CTOR_OFFSET UNITYSDK_OFFSET(0x16F61C80)

inline static constexpr unsigned int Class_1_2F21F96DCA41A511_TypeDefinitionIndex = 49253;

class Class_1_2F21F96DCA41A511 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511__CTOR_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_1_978DEB991218B150()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_978DEB991218B150_OFFSET))(this);
	}

	::System::Void Method_1_62DF1EBE90234E13(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_62DF1EBE90234E13_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_858D39F9CB5879BF(::System::Collections::Generic::List_1<::UnityEngine::Component*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_858D39F9CB5879BF_OFFSET))(a1);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_3375F7CF05902EFF(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_3375F7CF05902EFF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2611DFA46643D8B0(::UnityEngine::RectTransform* a1, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_2611DFA46643D8B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ECA92A315EE474D4(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_ECA92A315EE474D4_OFFSET))(a1);
	}

	static ::System::Void Method_1_C5BF16F333063C88(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_C5BF16F333063C88_OFFSET))(a1);
	}

	static ::System::Void Method_1_6F090B6C4B6D1200(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_6F090B6C4B6D1200_OFFSET))(a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Void Method_1_858D39F9CB5879BF_1(::System::Collections::Generic::List_1<::UnityEngine::Component*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_858D39F9CB5879BF_1_OFFSET))(a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F21F96DCA41A511_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
