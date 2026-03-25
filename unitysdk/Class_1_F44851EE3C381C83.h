#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_44AB1F7A27B2FF33;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class CharacterEntityColliderConfig; }
namespace RPG::GameCore { class EntityColliderConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F44851EE3C381C83_METHOD_1_1126F7306C7FD5A2_OFFSET UNITYSDK_OFFSET(0x109462F0)
#define CLASS_1_F44851EE3C381C83_METHOD_1_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0x10946270)
#define CLASS_1_F44851EE3C381C83_METHOD_1_1A980AF79A9D7862_OFFSET UNITYSDK_OFFSET(0x10945BA0)
#define CLASS_1_F44851EE3C381C83_METHOD_1_2C65973969B3759F_OFFSET UNITYSDK_OFFSET(0x10945040)
#define CLASS_1_F44851EE3C381C83_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0x10945660)
#define CLASS_1_F44851EE3C381C83_METHOD_1_5AFF66468E5869A6_OFFSET UNITYSDK_OFFSET(0x109460E0)
#define CLASS_1_F44851EE3C381C83_METHOD_1_6D80AF39E8B55CF6_OFFSET UNITYSDK_OFFSET(0x10945F20)
#define CLASS_1_F44851EE3C381C83_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x10944D40)
#define CLASS_1_F44851EE3C381C83_METHOD_1_89858ED6023C7A7F_OFFSET UNITYSDK_OFFSET(0x10945440)
#define CLASS_1_F44851EE3C381C83_METHOD_1_8CD7940BB321F162_OFFSET UNITYSDK_OFFSET(0x109464B0)
#define CLASS_1_F44851EE3C381C83_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x10945870)
#define CLASS_1_F44851EE3C381C83_METHOD_1_BDD5177BA96BCD09_OFFSET UNITYSDK_OFFSET(0x109459E0)
#define CLASS_1_F44851EE3C381C83_METHOD_1_BEF2FC4F639A2D73_OFFSET UNITYSDK_OFFSET(0x10945D50)
#define CLASS_1_F44851EE3C381C83__CCTOR_OFFSET UNITYSDK_OFFSET(0x10946550)

inline static constexpr unsigned int Class_1_F44851EE3C381C83_TypeDefinitionIndex = 45439;

class Class_1_F44851EE3C381C83 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44851EE3C381C83_TypeDefinitionIndex)->GetStaticField(0x39FB0);
	}
	static ::RPG::GameCore::EntityColliderConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::EntityColliderConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44851EE3C381C83_TypeDefinitionIndex)->GetStaticField(0x39FB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_44AB1F7A27B2FF33*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_44AB1F7A27B2FF33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44851EE3C381C83_TypeDefinitionIndex)->GetStaticField(0x39FC0);
	}
	// static const ::System::String* Field_1_3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_87318FF00D6BC7EB_OFFSET))();
	}

	static ::System::Void Method_1_2C65973969B3759F(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_2C65973969B3759F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_89858ED6023C7A7F(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_89858ED6023C7A7F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_36A43EE474699637_OFFSET))();
	}

	static ::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_B768DA94E3FD91D9_OFFSET))();
	}

	static ::Class_3_5775A4FEC79026BC* Method_1_BDD5177BA96BCD09(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Class_3_5775A4FEC79026BC*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_BDD5177BA96BCD09_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_1A980AF79A9D7862(::System::String* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_1A980AF79A9D7862_OFFSET))(a1, a2);
	}

	static ::Class_3_5775A4FEC79026BC* Method_1_BEF2FC4F639A2D73(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::Class_3_5775A4FEC79026BC*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_BEF2FC4F639A2D73_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_6D80AF39E8B55CF6(::System::String* a1, ::System::Single a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_6D80AF39E8B55CF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5AFF66468E5869A6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_5AFF66468E5869A6_OFFSET))();
	}

	static ::System::Single Method_1_13F0FEDB1C58AAEC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_13F0FEDB1C58AAEC_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_8CD7940BB321F162(::System::UInt32 a1)
	{
		return ((::RPG::MVector3(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_8CD7940BB321F162_OFFSET))(a1);
	}

	static ::RPG::GameCore::AvatarColliderCameraConfig* Method_1_1126F7306C7FD5A2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarColliderCameraConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F44851EE3C381C83_METHOD_1_1126F7306C7FD5A2_OFFSET))(a1);
	}
};
