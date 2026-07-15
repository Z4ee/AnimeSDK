#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupPropertySide.h"
#include "unitysdk/System/Object.h"

class Class_3_BE1CF038D8D0B656;
namespace System { class String; }

#define CLASS_1_E01312B0D5EC4CB7_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16176B30)
#define CLASS_1_E01312B0D5EC4CB7_METHOD_1_86959C1CB3D7A743_OFFSET UNITYSDK_OFFSET(0x16176B80)
#define CLASS_1_E01312B0D5EC4CB7_METHOD_1_BDACA5F9F4002279_OFFSET UNITYSDK_OFFSET(0x16176B40)
#define CLASS_1_E01312B0D5EC4CB7_METHOD_1_FA838E3EC151041E_OFFSET UNITYSDK_OFFSET(0x16176AD0)
#define CLASS_1_E01312B0D5EC4CB7__CTOR_OFFSET UNITYSDK_OFFSET(0x16176AA0)

inline static constexpr unsigned int Class_1_E01312B0D5EC4CB7_TypeDefinitionIndex = 59376;

class Class_1_E01312B0D5EC4CB7 : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10
	::Class_3_BE1CF038D8D0B656* Field_1_1; // 0x18
	::System::Int16 Field_1_2; // 0x20
	::System::Int16 Field_1_3; // 0x22
	::RPG::GameCore::GroupPropertySide Field_1_4; // 0x24
	::System::UInt32 Field_1_5; // 0x28
	::System::Int16 Field_1_6; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::Int16 a3, ::System::Int16 a4, ::System::Int16 a5, ::RPG::GameCore::GroupPropertySide a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16, ::System::Int16, ::System::Int16, ::RPG::GameCore::GroupPropertySide))((::PBYTE)hIl2Cpp + CLASS_1_E01312B0D5EC4CB7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_FA838E3EC151041E(::System::Int16 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_E01312B0D5EC4CB7_METHOD_1_FA838E3EC151041E_OFFSET))(this, a1);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01312B0D5EC4CB7_GET_NAME_OFFSET))(this);
	}

	::System::Int16 Method_1_BDACA5F9F4002279()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01312B0D5EC4CB7_METHOD_1_BDACA5F9F4002279_OFFSET))(this);
	}

	::System::Void Method_1_86959C1CB3D7A743(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_E01312B0D5EC4CB7_METHOD_1_86959C1CB3D7A743_OFFSET))(this, a1);
	}
};
