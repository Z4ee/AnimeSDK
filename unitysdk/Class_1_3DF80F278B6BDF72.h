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

#define CLASS_1_3DF80F278B6BDF72_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x1469B8E0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1469A7C0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_189C865264480324_OFFSET UNITYSDK_OFFSET(0x1469A900)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_387054F5B79293C7_OFFSET UNITYSDK_OFFSET(0x1469AA70)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_3D3868B6ACA53B56_OFFSET UNITYSDK_OFFSET(0x1469C000)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0x1469BA00)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_765EA9446D8F9DB2_OFFSET UNITYSDK_OFFSET(0x1469A7D0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_ACCAC327294A452E_1_OFFSET UNITYSDK_OFFSET(0x1469B830)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_ACCAC327294A452E_OFFSET UNITYSDK_OFFSET(0x1469B920)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_C287EBC63B93C2D1_OFFSET UNITYSDK_OFFSET(0x1469AC60)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x1469BD30)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_DFF7343CC5AB37FC_OFFSET UNITYSDK_OFFSET(0x1469C220)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_E683565DADBDB76F_OFFSET UNITYSDK_OFFSET(0x1469C420)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_F4BD73154A468F12_OFFSET UNITYSDK_OFFSET(0x1469A840)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1469BBD0)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_FA8D46F6DD179FDF_OFFSET UNITYSDK_OFFSET(0x1469BB60)
#define CLASS_1_3DF80F278B6BDF72_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1469A760)
#define CLASS_1_3DF80F278B6BDF72__CTOR_OFFSET UNITYSDK_OFFSET(0x1469C990)

inline static constexpr unsigned int Class_1_3DF80F278B6BDF72_TypeDefinitionIndex = 45632;

class Class_1_3DF80F278B6BDF72 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::WarmupQualitySet>* Field_1_0; // 0x10
	::System::Collections::IEnumerator* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::WarmupQualitySet>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Int32 Field_1_5; // 0x30

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

	static ::System::Int32 Method_1_765EA9446D8F9DB2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_765EA9446D8F9DB2_OFFSET))();
	}

	::System::Void Method_1_F4BD73154A468F12(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_F4BD73154A468F12_OFFSET))(this, a1);
	}

	::System::Void Method_1_387054F5B79293C7(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1, ::Il2CppArray<::SerializedWarmupPSO*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_387054F5B79293C7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>* Method_1_C287EBC63B93C2D1(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1, ::Il2CppArray<::SerializedWarmupPSO*>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_C287EBC63B93C2D1_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_189C865264480324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_189C865264480324_OFFSET))(this);
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

	::System::Collections::Generic::List_1<::WarmupQualitySet>* Method_1_3D3868B6ACA53B56()
	{
		return ((::System::Collections::Generic::List_1<::WarmupQualitySet>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_3D3868B6ACA53B56_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF7343CC5AB37FC(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_DFF7343CC5AB37FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E683565DADBDB76F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72_METHOD_1_E683565DADBDB76F_OFFSET))(this);
	}
};
