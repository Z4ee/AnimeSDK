#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"

namespace System::Collections { class IEnumerator; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class WaitForSeconds; }

#define CLASS_3_402121D94A91AFBA_METHOD_3_5C9AE39E1F6A1A21_OFFSET UNITYSDK_OFFSET(0x1621A8B0)
#define CLASS_3_402121D94A91AFBA_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1621A860)
#define CLASS_3_402121D94A91AFBA_METHOD_3_AB4CB744C1863F81_OFFSET UNITYSDK_OFFSET(0x1621A930)
#define CLASS_3_402121D94A91AFBA_METHOD_3_CA43F96720A5D04E_OFFSET UNITYSDK_OFFSET(0x1621A610)
#define CLASS_3_402121D94A91AFBA_METHOD_3_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x1621A6A0)
#define CLASS_3_402121D94A91AFBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1621A7E0)
#define CLASS_3_402121D94A91AFBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1621A510)

inline static constexpr unsigned int Class_3_402121D94A91AFBA_TypeDefinitionIndex = 57826;

class Class_3_402121D94A91AFBA : public ::Class_2_AB4261DB06E3A6BD
{
public:
	static ::System::Reflection::FieldInfo** StaticGet_Field_3_2()
	{
		return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_3_402121D94A91AFBA_TypeDefinitionIndex)->GetStaticField(0x36D50);
	}
	::System::Collections::IEnumerator* Field_3_1; // 0x40
	::System::Single Field_3_0; // 0x48

	::System::Void _ctor(::System::Collections::IEnumerator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA__CCTOR_OFFSET))();
	}

	::System::Void Method_3_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_METHOD_3_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_3_CA43F96720A5D04E(::System::Collections::IEnumerator* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_METHOD_3_CA43F96720A5D04E_OFFSET))(this, a1);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	static ::System::Collections::IEnumerator* Method_3_5C9AE39E1F6A1A21(::UnityEngine::AsyncOperation* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_METHOD_3_5C9AE39E1F6A1A21_OFFSET))(a1);
	}

	static ::System::Collections::IEnumerator* Method_3_AB4CB744C1863F81(::UnityEngine::WaitForSeconds* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::UnityEngine::WaitForSeconds*))((::PBYTE)hIl2Cpp + CLASS_3_402121D94A91AFBA_METHOD_3_AB4CB744C1863F81_OFFSET))(a1);
	}
};
