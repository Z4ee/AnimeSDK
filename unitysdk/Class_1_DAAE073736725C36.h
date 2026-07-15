#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_E43FAD8039115851;
class Class_1_EAF7984A8FAD6BE4;
class Class_2_570F143F9AE3B97E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DAAE073736725C36_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15FF2DD0)
#define CLASS_1_DAAE073736725C36_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x15FF2E40)
#define CLASS_1_DAAE073736725C36_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x15FF3950)
#define CLASS_1_DAAE073736725C36_METHOD_1_D5C5DD13DFD50A36_OFFSET UNITYSDK_OFFSET(0x15FF3850)
#define CLASS_1_DAAE073736725C36_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15FF2C20)
#define CLASS_1_DAAE073736725C36_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x15FF2D90)
#define CLASS_1_DAAE073736725C36__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF39D0)

inline static constexpr unsigned int Class_1_DAAE073736725C36_TypeDefinitionIndex = 47682;

class Class_1_DAAE073736725C36 : public ::System::Object
{
public:
	::Class_2_570F143F9AE3B97E* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector4>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Field_1_2; // 0x20
	::Il2CppArray<::UnityEngine::Color32>* Field_1_3; // 0x28
	::Il2CppArray<::UnityEngine::Color32>* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAAE073736725C36__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAAE073736725C36_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::Class_1_E43FAD8039115851* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E43FAD8039115851*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAAE073736725C36_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAAE073736725C36_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAAE073736725C36_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_D5C5DD13DFD50A36(::System::Int32 a1, ::Class_1_EAF7984A8FAD6BE4* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_EAF7984A8FAD6BE4*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DAAE073736725C36_METHOD_1_D5C5DD13DFD50A36_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DAAE073736725C36_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}
};
