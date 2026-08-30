#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_265;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }

#define CLASS_1_562CFB3355018A26_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C625180)
#define CLASS_1_562CFB3355018A26_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C625240)
#define CLASS_1_562CFB3355018A26_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C625320)
#define CLASS_1_562CFB3355018A26__CTOR_OFFSET UNITYSDK_OFFSET(0x1C625360)

inline static constexpr unsigned int Class_1_562CFB3355018A26_TypeDefinitionIndex = 41855;

class Class_1_562CFB3355018A26 : public ::System::Object
{
public:
	::System::Action* HGOJNFKDIMA; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* CFBAAMFMIJE; // 0x18
	::RPG::PoolHashSet_1<::System::Int32>* JDBNDOAKIDC; // 0x20
	::Class_0_16E4307DCC419505_265* FKIBGPJNCIJ; // 0x28
	::System::Boolean JOGPCCBNBHI; // 0x30
	::System::Boolean OHJLAOMDJKE; // 0x31
	::System::Boolean IPKICAFDKEP; // 0x32
	::System::Boolean LKNGNNABKOA; // 0x33
	::System::Single IGHMGFAEGJN; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26_ONRECYCLE_OFFSET))(this);
	}
};
