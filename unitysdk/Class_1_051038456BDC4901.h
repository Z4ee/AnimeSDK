#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_2579FB4605A70564;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class CharacterEntityColliderConfig; }
namespace RPG::GameCore { class EntityColliderConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_051038456BDC4901_METHOD_1_1143B7D590D240EB_OFFSET UNITYSDK_OFFSET(0x15E530F0)
#define CLASS_1_051038456BDC4901_METHOD_1_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0x15E53070)
#define CLASS_1_051038456BDC4901_METHOD_1_1A980AF79A9D7862_OFFSET UNITYSDK_OFFSET(0x15E529E0)
#define CLASS_1_051038456BDC4901_METHOD_1_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0x15E52EF0)
#define CLASS_1_051038456BDC4901_METHOD_1_35FE2B82F2FEA842_OFFSET UNITYSDK_OFFSET(0x15E51E70)
#define CLASS_1_051038456BDC4901_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15E526F0)
#define CLASS_1_051038456BDC4901_METHOD_1_6D80AF39E8B55CF6_OFFSET UNITYSDK_OFFSET(0x15E52D40)
#define CLASS_1_051038456BDC4901_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x15E51B70)
#define CLASS_1_051038456BDC4901_METHOD_1_8CD7940BB321F162_OFFSET UNITYSDK_OFFSET(0x15E53270)
#define CLASS_1_051038456BDC4901_METHOD_1_AA99A1C3FC0CFB9D_OFFSET UNITYSDK_OFFSET(0x15E52500)
#define CLASS_1_051038456BDC4901_METHOD_1_BDD5177BA96BCD09_OFFSET UNITYSDK_OFFSET(0x15E52830)
#define CLASS_1_051038456BDC4901_METHOD_1_BEF2FC4F639A2D73_OFFSET UNITYSDK_OFFSET(0x15E52B80)
#define CLASS_1_051038456BDC4901_METHOD_1_DE8694BE1BE731E5_OFFSET UNITYSDK_OFFSET(0x15E522D0)
#define CLASS_1_051038456BDC4901__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E53310)

inline static constexpr unsigned int Class_1_051038456BDC4901_TypeDefinitionIndex = 53968;

class Class_1_051038456BDC4901 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051038456BDC4901_TypeDefinitionIndex)->GetStaticField(0x61030);
	}
	static ::RPG::GameCore::EntityColliderConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::EntityColliderConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051038456BDC4901_TypeDefinitionIndex)->GetStaticField(0x61038);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2579FB4605A70564*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2579FB4605A70564*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_051038456BDC4901_TypeDefinitionIndex)->GetStaticField(0x61040);
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

	static ::System::Void Method_1_35FE2B82F2FEA842(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_35FE2B82F2FEA842_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DE8694BE1BE731E5(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_DE8694BE1BE731E5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AA99A1C3FC0CFB9D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_AA99A1C3FC0CFB9D_OFFSET))();
	}

	static ::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_41A074549EF25F63_OFFSET))();
	}

	static ::Class_3_07C3C4D2990C49EE* Method_1_BDD5177BA96BCD09(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_BDD5177BA96BCD09_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_1A980AF79A9D7862(::System::String* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_1A980AF79A9D7862_OFFSET))(a1, a2);
	}

	static ::Class_3_07C3C4D2990C49EE* Method_1_BEF2FC4F639A2D73(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_BEF2FC4F639A2D73_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_6D80AF39E8B55CF6(::System::String* a1, ::System::Single a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_6D80AF39E8B55CF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_26C5221AC22B6534()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_26C5221AC22B6534_OFFSET))();
	}

	static ::System::Single Method_1_13F0FEDB1C58AAEC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_13F0FEDB1C58AAEC_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_8CD7940BB321F162(::System::UInt32 a1)
	{
		return ((::RPG::MVector3(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_8CD7940BB321F162_OFFSET))(a1);
	}

	static ::RPG::GameCore::AvatarColliderCameraConfig* Method_1_1143B7D590D240EB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarColliderCameraConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_051038456BDC4901_METHOD_1_1143B7D590D240EB_OFFSET))(a1);
	}
};
