#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_44AB1F7A27B2FF33;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class CharacterEntityColliderConfig; }
namespace RPG::GameCore { class EntityColliderConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_051038456BDC4901_METHOD_1_1126F7306C7FD5A2_OFFSET UNITYSDK_OFFSET(0xBABA7C0)
#define CLASS_1_051038456BDC4901_METHOD_1_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0xBABA740)
#define CLASS_1_051038456BDC4901_METHOD_1_1A980AF79A9D7862_OFFSET UNITYSDK_OFFSET(0xBABA070)
#define CLASS_1_051038456BDC4901_METHOD_1_2C65973969B3759F_OFFSET UNITYSDK_OFFSET(0xBAB94E0)
#define CLASS_1_051038456BDC4901_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0xBAB9B30)
#define CLASS_1_051038456BDC4901_METHOD_1_5AFF66468E5869A6_OFFSET UNITYSDK_OFFSET(0xBABA5B0)
#define CLASS_1_051038456BDC4901_METHOD_1_6D80AF39E8B55CF6_OFFSET UNITYSDK_OFFSET(0xBABA3F0)
#define CLASS_1_051038456BDC4901_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xBAB91E0)
#define CLASS_1_051038456BDC4901_METHOD_1_8CD7940BB321F162_OFFSET UNITYSDK_OFFSET(0xBABA980)
#define CLASS_1_051038456BDC4901_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xBAB9D40)
#define CLASS_1_051038456BDC4901_METHOD_1_BDD5177BA96BCD09_OFFSET UNITYSDK_OFFSET(0xBAB9EB0)
#define CLASS_1_051038456BDC4901_METHOD_1_BEF2FC4F639A2D73_OFFSET UNITYSDK_OFFSET(0xBABA220)
#define CLASS_1_051038456BDC4901_METHOD_1_DE8694BE1BE731E5_OFFSET UNITYSDK_OFFSET(0xBAB98E0)
#define CLASS_1_051038456BDC4901__CCTOR_OFFSET UNITYSDK_OFFSET(0xBABAA20)

inline static constexpr unsigned int Class_1_051038456BDC4901_TypeDefinitionIndex = 52083;

class Class_1_051038456BDC4901 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051038456BDC4901_TypeDefinitionIndex)->GetStaticField(0x6A5C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_44AB1F7A27B2FF33*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_44AB1F7A27B2FF33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051038456BDC4901_TypeDefinitionIndex)->GetStaticField(0x6A5C8);
	}
	static ::RPG::GameCore::EntityColliderConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::EntityColliderConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051038456BDC4901_TypeDefinitionIndex)->GetStaticField(0x6A5D0);
	}
	// static const ::System::String* Field_1_3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_87318FF00D6BC7EB_OFFSET))();
	}

	static ::System::Void Method_1_2C65973969B3759F(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_2C65973969B3759F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE8694BE1BE731E5(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_DE8694BE1BE731E5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_36A43EE474699637_OFFSET))();
	}

	static ::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_B768DA94E3FD91D9_OFFSET))();
	}

	static ::Class_3_E21F6DE9B7FA4D05* Method_1_BDD5177BA96BCD09(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Class_3_E21F6DE9B7FA4D05*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_BDD5177BA96BCD09_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_1A980AF79A9D7862(::System::String* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_1A980AF79A9D7862_OFFSET))(a1, a2);
	}

	static ::Class_3_E21F6DE9B7FA4D05* Method_1_BEF2FC4F639A2D73(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::Class_3_E21F6DE9B7FA4D05*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_BEF2FC4F639A2D73_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_6D80AF39E8B55CF6(::System::String* a1, ::System::Single a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_6D80AF39E8B55CF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5AFF66468E5869A6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_5AFF66468E5869A6_OFFSET))();
	}

	static ::System::Single Method_1_13F0FEDB1C58AAEC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_13F0FEDB1C58AAEC_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_8CD7940BB321F162(::System::UInt32 a1)
	{
		return ((::RPG::MVector3(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_8CD7940BB321F162_OFFSET))(a1);
	}

	static ::RPG::GameCore::AvatarColliderCameraConfig* Method_1_1126F7306C7FD5A2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarColliderCameraConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_1126F7306C7FD5A2_OFFSET))(a1);
	}
};
