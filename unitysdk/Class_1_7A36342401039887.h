#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83E6638060174809;
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7A36342401039887_METHOD_1_06553CBC743B474B_OFFSET UNITYSDK_OFFSET(0x12A63AD0)
#define CLASS_1_7A36342401039887_METHOD_1_1AD007B91E355666_OFFSET UNITYSDK_OFFSET(0x12A63C60)
#define CLASS_1_7A36342401039887_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x12A63F10)
#define CLASS_1_7A36342401039887_METHOD_1_C94154157FFDBDC4_OFFSET UNITYSDK_OFFSET(0x12A63DF0)
#define CLASS_1_7A36342401039887__CTOR_OFFSET UNITYSDK_OFFSET(0x12A63F20)

inline static constexpr unsigned int Class_1_7A36342401039887_TypeDefinitionIndex = 52467;

class Class_1_7A36342401039887 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_83E6638060174809*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A36342401039887__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_06553CBC743B474B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7A36342401039887_METHOD_1_06553CBC743B474B_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_1AD007B91E355666(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A36342401039887_METHOD_1_1AD007B91E355666_OFFSET))(this, a1);
	}

	::System::Void Method_1_C94154157FFDBDC4(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + CLASS_1_7A36342401039887_METHOD_1_C94154157FFDBDC4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_83E6638060174809*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_83E6638060174809*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A36342401039887_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};
