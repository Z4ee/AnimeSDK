#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_E4FACDF933CFA4FD_OpenState.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_3_C270952194C1A3FA;
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E4FACDF933CFA4FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B4B720)
#define CLASS_2_E4FACDF933CFA4FD_METHOD_2_4D9155AC20AD5421_OFFSET UNITYSDK_OFFSET(0x11B4BE60)
#define CLASS_2_E4FACDF933CFA4FD_METHOD_2_6B26DD72FB4583FD_OFFSET UNITYSDK_OFFSET(0x11B4BA90)
#define CLASS_2_E4FACDF933CFA4FD_METHOD_2_CDC24BD175A37396_OFFSET UNITYSDK_OFFSET(0x11B4C000)
#define CLASS_2_E4FACDF933CFA4FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B4B8E0)
#define CLASS_2_E4FACDF933CFA4FD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B4B840)
#define CLASS_2_E4FACDF933CFA4FD_TICK_OFFSET UNITYSDK_OFFSET(0x11B4BC20)
#define CLASS_2_E4FACDF933CFA4FD__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4B710)

inline static constexpr unsigned int Class_2_E4FACDF933CFA4FD_TypeDefinitionIndex = 49067;

class Class_2_E4FACDF933CFA4FD : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Struct_2_D3027B1CDFF61281 Field_2_2; // 0x20
	::Class_3_C270952194C1A3FA* Field_2_0; // 0x50
	::System::Single Field_2_5; // 0x58
	::Class_2_E4FACDF933CFA4FD_OpenState Field_2_3; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C270952194C1A3FA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C270952194C1A3FA*))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CDC24BD175A37396(::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD_METHOD_2_CDC24BD175A37396_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D9155AC20AD5421(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD_METHOD_2_4D9155AC20AD5421_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B26DD72FB4583FD(::Class_2_E4FACDF933CFA4FD_OpenState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E4FACDF933CFA4FD_OpenState))((::PBYTE)hIl2Cpp + CLASS_2_E4FACDF933CFA4FD_METHOD_2_6B26DD72FB4583FD_OFFSET))(this, a1);
	}
};
