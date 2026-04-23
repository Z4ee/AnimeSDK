#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_1980312AC66EE882;
class Class_1_A5344434C2683AB3;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_03C16F0BFAD3A648_METHOD_1_3BB35CD86C8F267D_OFFSET UNITYSDK_OFFSET(0x129CA8A0)
#define CLASS_1_03C16F0BFAD3A648_METHOD_1_6E75215C16F55F33_1_OFFSET UNITYSDK_OFFSET(0x129CA7D0)
#define CLASS_1_03C16F0BFAD3A648_METHOD_1_6E75215C16F55F33_OFFSET UNITYSDK_OFFSET(0x129CA370)
#define CLASS_1_03C16F0BFAD3A648_METHOD_1_E63B2D192A140C14_OFFSET UNITYSDK_OFFSET(0x129CB680)
#define CLASS_1_03C16F0BFAD3A648_METHOD_1_F5648B53C0643051_OFFSET UNITYSDK_OFFSET(0x129CA440)
#define CLASS_1_03C16F0BFAD3A648__CCTOR_OFFSET UNITYSDK_OFFSET(0x129C99D0)
#define CLASS_1_03C16F0BFAD3A648__CTOR_OFFSET UNITYSDK_OFFSET(0x129CA1C0)

inline static constexpr unsigned int Class_1_03C16F0BFAD3A648_TypeDefinitionIndex = 57644;

class Class_1_03C16F0BFAD3A648 : public ::System::Object
{
public:
	static ::Class_1_1980312AC66EE882** StaticGet_Field_1_2()
	{
		return (::Class_1_1980312AC66EE882**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03C16F0BFAD3A648_TypeDefinitionIndex)->GetStaticField(0x33D00);
	}
	::Class_1_A5344434C2683AB3* Field_1_1; // 0x10
	::RPG::Client::AvatarData* Field_1_0; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_03C16F0BFAD3A648__CCTOR_OFFSET))();
	}

	::System::Void _ctor(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_03C16F0BFAD3A648__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_6E75215C16F55F33(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03C16F0BFAD3A648_METHOD_1_6E75215C16F55F33_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_6E75215C16F55F33_1(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03C16F0BFAD3A648_METHOD_1_6E75215C16F55F33_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_F5648B53C0643051(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03C16F0BFAD3A648_METHOD_1_F5648B53C0643051_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_E63B2D192A140C14(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03C16F0BFAD3A648_METHOD_1_E63B2D192A140C14_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3BB35CD86C8F267D(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2, ::RPG::GameCore::FixPoint& a3, ::RPG::GameCore::FixPoint& a4, ::RPG::GameCore::FixPoint& a5, ::RPG::GameCore::FixPoint& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_03C16F0BFAD3A648_METHOD_1_3BB35CD86C8F267D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
