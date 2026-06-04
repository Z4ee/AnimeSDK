#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }
namespace System { class String; }

#define CLASS_3_F228983C207B974A_METHOD_3_2D640F07944A24EB_OFFSET UNITYSDK_OFFSET(0x1996B650)
#define CLASS_3_F228983C207B974A_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x1996B6F0)
#define CLASS_3_F228983C207B974A__CTOR_OFFSET UNITYSDK_OFFSET(0x1996B6B0)

inline static constexpr unsigned int Class_3_F228983C207B974A_TypeDefinitionIndex = 20287;

class Class_3_F228983C207B974A : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::Int16>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::UInt32 Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x34
	::System::Boolean Field_3_5; // 0x35
	::System::Boolean Field_3_6; // 0x36
	::System::Single Field_3_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F228983C207B974A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D640F07944A24EB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F228983C207B974A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F228983C207B974A*&))((::PBYTE)hIl2Cpp + CLASS_3_F228983C207B974A_METHOD_3_2D640F07944A24EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F228983C207B974A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F228983C207B974A*))((::PBYTE)hIl2Cpp + CLASS_3_F228983C207B974A_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};
