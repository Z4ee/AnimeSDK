#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_28031E019EB5D020___c__DisplayClass3_0.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_776;
class Class_1_41BD87BD0ADE4B8D;
class Class_1_7432AA47CD18C2A2;

#define CLASS_1_28031E019EB5D020_METHOD_1_6DA1CEBD39FD1E13_OFFSET UNITYSDK_OFFSET(0xC48BA40)
#define CLASS_1_28031E019EB5D020__CREATE_G__ADDSKINID_3_1_OFFSET UNITYSDK_OFFSET(0xC48C090)
#define CLASS_1_28031E019EB5D020__CREATE_G__ISTARGET_3_0_OFFSET UNITYSDK_OFFSET(0xC48BD00)
#define CLASS_1_28031E019EB5D020__CTOR_OFFSET UNITYSDK_OFFSET(0xC48B9B0)

inline static constexpr unsigned int Class_1_28031E019EB5D020_TypeDefinitionIndex = 62705;

class Class_1_28031E019EB5D020 : public ::System::Object
{
public:
	::Class_1_41BD87BD0ADE4B8D* ONAJFBCPFGO; // 0x10
	::Class_0_16E4307DCC419505_776* LJGCFGEGICI; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_776* a1, ::Class_1_41BD87BD0ADE4B8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_776*, ::Class_1_41BD87BD0ADE4B8D*))((::PBYTE)hIl2Cpp + CLASS_1_28031E019EB5D020__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_7432AA47CD18C2A2* Method_1_6DA1CEBD39FD1E13(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_7432AA47CD18C2A2*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_28031E019EB5D020_METHOD_1_6DA1CEBD39FD1E13_OFFSET))(this, a1);
	}

	static ::System::Boolean _Create_g__IsTarget_3_0(::System::UInt32 a1, ::Class_1_28031E019EB5D020___c__DisplayClass3_0& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Class_1_28031E019EB5D020___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + CLASS_1_28031E019EB5D020__CREATE_G__ISTARGET_3_0_OFFSET))(a1, a2);
	}

	static ::System::Void _Create_g__AddSkinID_3_1(::RPG::GameCore::AvatarSkinType a1, ::System::UInt32 a2, ::Class_1_28031E019EB5D020___c__DisplayClass3_0& a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarSkinType, ::System::UInt32, ::Class_1_28031E019EB5D020___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + CLASS_1_28031E019EB5D020__CREATE_G__ADDSKINID_3_1_OFFSET))(a1, a2, a3);
	}
};
