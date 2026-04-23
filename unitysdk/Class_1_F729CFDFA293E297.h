#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F729CFDFA293E297___c__DisplayClass3_0.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_10B66F9FBD70F037;
class Class_1_72F33CD8E9664C54;
class Class_1_7432AA47CD18C2A2;

#define CLASS_1_F729CFDFA293E297_METHOD_1_AD72F59B76F6CDEB_OFFSET UNITYSDK_OFFSET(0x12AD86C0)
#define CLASS_1_F729CFDFA293E297__CREATE_G__ADDSKINID_3_1_OFFSET UNITYSDK_OFFSET(0x12AD8B50)
#define CLASS_1_F729CFDFA293E297__CREATE_G__ISTARGET_3_0_OFFSET UNITYSDK_OFFSET(0x12AD8900)
#define CLASS_1_F729CFDFA293E297__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD8630)

inline static constexpr unsigned int Class_1_F729CFDFA293E297_TypeDefinitionIndex = 57775;

class Class_1_F729CFDFA293E297 : public ::System::Object
{
public:
	::Class_1_10B66F9FBD70F037* Field_1_0; // 0x10
	::Class_1_72F33CD8E9664C54* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_10B66F9FBD70F037* a1, ::Class_1_72F33CD8E9664C54* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10B66F9FBD70F037*, ::Class_1_72F33CD8E9664C54*))((::PBYTE)hIl2Cpp + CLASS_1_F729CFDFA293E297__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_7432AA47CD18C2A2* Method_1_AD72F59B76F6CDEB(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_7432AA47CD18C2A2*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_F729CFDFA293E297_METHOD_1_AD72F59B76F6CDEB_OFFSET))(this, a1);
	}

	static ::System::Boolean _Create_g__IsTarget_3_0(::System::UInt32 avatarID, ::Class_1_F729CFDFA293E297___c__DisplayClass3_0& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Class_1_F729CFDFA293E297___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + CLASS_1_F729CFDFA293E297__CREATE_G__ISTARGET_3_0_OFFSET))(avatarID, a2);
	}

	static ::System::Void _Create_g__AddSkinID_3_1(::RPG::GameCore::AvatarSkinType type, ::System::UInt32 id, ::Class_1_F729CFDFA293E297___c__DisplayClass3_0& a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarSkinType, ::System::UInt32, ::Class_1_F729CFDFA293E297___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + CLASS_1_F729CFDFA293E297__CREATE_G__ADDSKINID_3_1_OFFSET))(type, id, a3);
	}
};
