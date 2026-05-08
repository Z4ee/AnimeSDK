#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_7C9A70DC3FC57CDC;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F423242F3D5F93B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AB58A0)
#define CLASS_1_1F423242F3D5F93B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18AB5F70)
#define CLASS_1_1F423242F3D5F93B_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x18AB5FF0)
#define CLASS_1_1F423242F3D5F93B_METHOD_1_E07D6AAA98B227A2_OFFSET UNITYSDK_OFFSET(0x18AB5900)
#define CLASS_1_1F423242F3D5F93B__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB6CE0)

inline static constexpr unsigned int Class_1_1F423242F3D5F93B_TypeDefinitionIndex = 71532;

class Class_1_1F423242F3D5F93B : public ::System::Object
{
public:
	::MoleMole::Config::DynamicInt* Field_1_0; // 0x10
	::MoleMole::Config::DynamicString* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_4; // 0x20
	::MoleMole::Config::DynamicInt* Field_1_3; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Boolean Field_1_5; // 0x32
	::System::Boolean Field_1_7; // 0x33

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F423242F3D5F93B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F423242F3D5F93B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_1F423242F3D5F93B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1F423242F3D5F93B_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E07D6AAA98B227A2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F423242F3D5F93B_METHOD_1_E07D6AAA98B227A2_OFFSET))(this, a1, a2);
	}
};
