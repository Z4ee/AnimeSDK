#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1498;
class Class_1_1B99252A494766ED;
class Class_1_9D920BED3FEFDD0C;
class Class_1_E2972620852557B7_1;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_854AC667099E05BB_METHOD_1_8C848F2956B08B9A_OFFSET UNITYSDK_OFFSET(0x15E2D8C0)
#define CLASS_1_854AC667099E05BB_METHOD_1_94EBC8715A4B1B73_1_OFFSET UNITYSDK_OFFSET(0x15E2E080)
#define CLASS_1_854AC667099E05BB_METHOD_1_94EBC8715A4B1B73_OFFSET UNITYSDK_OFFSET(0x15E2DAD0)
#define CLASS_1_854AC667099E05BB__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2D8A0)

inline static constexpr unsigned int Class_1_854AC667099E05BB_TypeDefinitionIndex = 79625;

class Class_1_854AC667099E05BB : public ::System::Object
{
public:
	::Class_1_1B99252A494766ED* BKGONBBCKAH; // 0x10
	::Class_1_E2972620852557B7_1* MEHJMKABEFA; // 0x18
	::Class_0_16E4307DCC419505_1498* KDBNLBFFHDB; // 0x20
	::Class_1_9D920BED3FEFDD0C* JDNJLANNING; // 0x28

	::System::Void _ctor(::Class_1_E2972620852557B7_1* a1, ::Class_1_1B99252A494766ED* a2, ::Class_1_9D920BED3FEFDD0C* a3, ::Class_0_16E4307DCC419505_1498* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2972620852557B7_1*, ::Class_1_1B99252A494766ED*, ::Class_1_9D920BED3FEFDD0C*, ::Class_0_16E4307DCC419505_1498*))((::PBYTE)hIl2Cpp + CLASS_1_854AC667099E05BB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewModel* Method_1_8C848F2956B08B9A()
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854AC667099E05BB_METHOD_1_8C848F2956B08B9A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>* Method_1_94EBC8715A4B1B73()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854AC667099E05BB_METHOD_1_94EBC8715A4B1B73_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>* Method_1_94EBC8715A4B1B73_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854AC667099E05BB_METHOD_1_94EBC8715A4B1B73_1_OFFSET))(this);
	}
};
