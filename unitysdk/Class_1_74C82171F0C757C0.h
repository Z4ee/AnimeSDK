#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_2_126E26F0DF7D8CF7;
class Class_2_5C38134D4169B6E0;
namespace MoleMole::Config { class MapIconTrait; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_1_74C82171F0C757C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113CB3A0)
#define CLASS_1_74C82171F0C757C0_METHOD_1_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x113CB7A0)
#define CLASS_1_74C82171F0C757C0_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x113CBA40)
#define CLASS_1_74C82171F0C757C0_METHOD_1_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x113CB730)
#define CLASS_1_74C82171F0C757C0_METHOD_1_DCAAE1005C7B2A2E_OFFSET UNITYSDK_OFFSET(0x113CBBE0)
#define CLASS_1_74C82171F0C757C0__CTOR_OFFSET UNITYSDK_OFFSET(0x113CB1B0)

inline static constexpr unsigned int Class_1_74C82171F0C757C0_TypeDefinitionIndex = 59266;

class Class_1_74C82171F0C757C0 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_3; // 0x10
	::Class_2_000597E145D7A42A<::System::Int32>* Field_1_7; // 0x18
	::Class_2_5C38134D4169B6E0* Field_1_5; // 0x20
	::MoleMole::Config::MapIconTrait* Field_1_1; // 0x28
	::Class_2_126E26F0DF7D8CF7* Field_1_0; // 0x30
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_8; // 0x38
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_1_4; // 0x40
	::System::Boolean Field_1_6; // 0x48
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_2; // 0x4C

	::System::Void _ctor(::Class_2_126E26F0DF7D8CF7* a1, ::MoleMole::Config::MapIconTrait* a2, ::Foundation::ViewObject::GroupMemberIdentifier a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_126E26F0DF7D8CF7*, ::MoleMole::Config::MapIconTrait*, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74C82171F0C757C0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74C82171F0C757C0_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74C82171F0C757C0_METHOD_1_CF8BA38996D09531_OFFSET))(this);
	}

	::System::Boolean Method_1_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74C82171F0C757C0_METHOD_1_1C298FA6BB9350FA_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74C82171F0C757C0_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_DCAAE1005C7B2A2E()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74C82171F0C757C0_METHOD_1_DCAAE1005C7B2A2E_OFFSET))(this);
	}
};
