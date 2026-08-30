#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/IgnoreCollisionReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7914D266DD01BD08_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDDAC30)
#define CLASS_1_7914D266DD01BD08_METHOD_1_1CA07ABB7EDDA53F_OFFSET UNITYSDK_OFFSET(0x1CDDB160)
#define CLASS_1_7914D266DD01BD08_METHOD_1_355098BE7E395AFD_OFFSET UNITYSDK_OFFSET(0x1CDDB2D0)
#define CLASS_1_7914D266DD01BD08_METHOD_1_3635630447926A61_OFFSET UNITYSDK_OFFSET(0x1CDDAE00)
#define CLASS_1_7914D266DD01BD08_METHOD_1_36478475211337A9_OFFSET UNITYSDK_OFFSET(0x1CDDB620)
#define CLASS_1_7914D266DD01BD08_METHOD_1_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x1CDDAD80)
#define CLASS_1_7914D266DD01BD08_METHOD_1_A799B17DDBC2AB8A_OFFSET UNITYSDK_OFFSET(0x1CDDB3D0)
#define CLASS_1_7914D266DD01BD08_METHOD_1_E9E466E6EDEDE266_OFFSET UNITYSDK_OFFSET(0x1CDDAFB0)
#define CLASS_1_7914D266DD01BD08__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDB6D0)

inline static constexpr unsigned int Class_1_7914D266DD01BD08_TypeDefinitionIndex = 41623;

class Class_1_7914D266DD01BD08 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason>* DPEFCHKHOEA; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* LELLAOBKMGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_5F6398776E49CD87(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_METHOD_1_5F6398776E49CD87_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3635630447926A61(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_METHOD_1_3635630447926A61_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1CA07ABB7EDDA53F(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_METHOD_1_1CA07ABB7EDDA53F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A799B17DDBC2AB8A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_METHOD_1_A799B17DDBC2AB8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_36478475211337A9(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_METHOD_1_36478475211337A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9E466E6EDEDE266(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_METHOD_1_E9E466E6EDEDE266_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_355098BE7E395AFD(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_7914D266DD01BD08_METHOD_1_355098BE7E395AFD_OFFSET))(this, a1, a2);
	}
};
