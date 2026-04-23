#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"

class Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796;
class SerializedWarmupPSO;
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define CLASS_1_3DF80F278B6BDF72_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x129E9D40)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x129E8A90)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_387054F5B79293C7_OFFSET UNITYSDK_OFFSET(0x129E8D10)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0x129E9E60)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x129E8C10)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x129EA9B0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_9B4017207CB712E1_OFFSET UNITYSDK_OFFSET(0x129E8AA0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_A7A3BAEC54777722_OFFSET UNITYSDK_OFFSET(0x129EA430)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_ACCAC327294A452E_1_OFFSET UNITYSDK_OFFSET(0x129E9C90)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_ACCAC327294A452E_OFFSET UNITYSDK_OFFSET(0x129E9D80)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x129EA130)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_DFF7343CC5AB37FC_OFFSET UNITYSDK_OFFSET(0x129EA780)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_EDABD14D4384C242_OFFSET UNITYSDK_OFFSET(0x129E8EA0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_F4BD73154A468F12_OFFSET UNITYSDK_OFFSET(0x129E8B50)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x129E9FD0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_FA8D46F6DD179FDF_OFFSET UNITYSDK_OFFSET(0x129E9F60)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x129E8A30)
#define CLASS_1_3DF80F278B6BDF72__CTOR_OFFSET UNITYSDK_OFFSET(0x129EAF30)

inline static constexpr unsigned int Class_1_3DF80F278B6BDF72_TypeDefinitionIndex = 44171;

class Class_1_3DF80F278B6BDF72 : public ::System::Object
{
public:
	::System::Collections::IEnumerator* Field_1_5; // 0x10
	::System::Collections::Generic::HashSet_1<::WarmupQualitySet>* Field_1_4; // 0x18
	::System::Collections::Generic::HashSet_1<::WarmupQualitySet>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_2; // 0x2C
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	static ::System::Int32 Method_1_9B4017207CB712E1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_9B4017207CB712E1_OFFSET))();
	}

	::System::Void Method_1_F4BD73154A468F12(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_F4BD73154A468F12_OFFSET))(this, a1);
	}

	::System::Void Method_1_387054F5B79293C7(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1, ::Il2CppArray<::SerializedWarmupPSO*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_387054F5B79293C7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>* Method_1_EDABD14D4384C242(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1, ::Il2CppArray<::SerializedWarmupPSO*>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_EDABD14D4384C242_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::System::Collections::IEnumerable* Method_1_ACCAC327294A452E(::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>* a1)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_ACCAC327294A452E_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerable* Method_1_ACCAC327294A452E_1(::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>* a1)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_ACCAC327294A452E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_67C142C8523FB4DC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_67C142C8523FB4DC_OFFSET))(this);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	static ::System::String* Method_1_FA8D46F6DD179FDF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_FA8D46F6DD179FDF_OFFSET))();
	}

	static ::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_F5447CD65612575D_OFFSET))();
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::WarmupQualitySet>* Method_1_A7A3BAEC54777722()
	{
		return ((::System::Collections::Generic::List_1<::WarmupQualitySet>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_A7A3BAEC54777722_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF7343CC5AB37FC(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_DFF7343CC5AB37FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_96980C17A8BB1F06_OFFSET))(this);
	}
};
