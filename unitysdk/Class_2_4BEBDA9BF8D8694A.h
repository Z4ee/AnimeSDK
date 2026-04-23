#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3FBBE3A5D4F5B883.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4BEBDA9BF8D8694A_Class_1_5D9E8B61A63FE4D2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_4BEBDA9BF8D8694A_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x9248A50)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9248B10)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_59D66E8B78D34F93_OFFSET UNITYSDK_OFFSET(0x92482E0)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_800F639BD9FC366E_OFFSET UNITYSDK_OFFSET(0x9247BF0)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x9246E60)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x9247110)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x9247980)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0x9248130)
#define CLASS_2_4BEBDA9BF8D8694A_METHOD_2_FBA4254EF4E174E5_OFFSET UNITYSDK_OFFSET(0x9248740)
#define CLASS_2_4BEBDA9BF8D8694A__CTOR_OFFSET UNITYSDK_OFFSET(0x9248A60)

inline static constexpr unsigned int Class_2_4BEBDA9BF8D8694A_TypeDefinitionIndex = 65122;

class Class_2_4BEBDA9BF8D8694A : public ::Class_1_3FBBE3A5D4F5B883
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_2_12; // 0x30
	::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* Field_2_14; // 0x38
	::Il2CppArray<::System::Nullable_1<::UnityEngine::Vector3>>* Field_2_15; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_13; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* Field_2_11; // 0x50
	::Class_2_4BEBDA9BF8D8694A_Class_1_5D9E8B61A63FE4D2* Field_2_3; // 0x58
	::UnityEngine::Vector3 Field_2_8; // 0x60
	::System::Int32 Field_2_2; // 0x6C
	::UnityEngine::Vector3 Field_2_5; // 0x70
	::UnityEngine::Vector3 Field_2_4; // 0x7C
	::UnityEngine::Vector3 Field_2_6; // 0x88
	::System::Boolean Field_2_10; // 0x94
	::System::Single Field_2_1; // 0x98
	::System::Int32 Field_2_0; // 0x9C
	::UnityEngine::Vector3 Field_2_7; // 0xA0
	::System::Int32 Field_2_9; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Boolean Method_2_59D66E8B78D34F93(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_59D66E8B78D34F93_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4533278489E08D3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_C4533278489E08D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FBA4254EF4E174E5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_FBA4254EF4E174E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_800F639BD9FC366E(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_800F639BD9FC366E_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Boolean get_EnableRuntimeTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_GET_ENABLERUNTIMETICK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEBDA9BF8D8694A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
