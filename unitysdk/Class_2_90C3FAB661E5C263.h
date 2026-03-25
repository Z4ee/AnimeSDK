#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_90C3FAB661E5C263_ReferenceSource.h"
#include "unitysdk/Class_2_90C3FAB661E5C263_ReferenceType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_2CAAA2FDF9170110;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_90C3FAB661E5C263_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DD4200)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_146C3E7311763B1B_OFFSET UNITYSDK_OFFSET(0x8DD2C50)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8DD3C30)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_1_OFFSET UNITYSDK_OFFSET(0x8DD2A60)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_OFFSET UNITYSDK_OFFSET(0x8DD28A0)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_912CD6A43BF0D575_OFFSET UNITYSDK_OFFSET(0x8DD2BD0)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_9873EE85585D09C9_OFFSET UNITYSDK_OFFSET(0x8DD2E40)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_988EE78A892C77F3_OFFSET UNITYSDK_OFFSET(0x8DD2ED0)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_A546BF9AF16A6444_OFFSET UNITYSDK_OFFSET(0x8DD3540)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_AAB4AB00F32325E7_OFFSET UNITYSDK_OFFSET(0x8DD2F50)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_B3D8C24A1997E8EF_OFFSET UNITYSDK_OFFSET(0x8DD36A0)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x8DD38F0)
#define CLASS_2_90C3FAB661E5C263__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DD4690)
#define CLASS_2_90C3FAB661E5C263__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD3D40)

inline static constexpr unsigned int Class_2_90C3FAB661E5C263_TypeDefinitionIndex = 46574;

class Class_2_90C3FAB661E5C263 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90C3FAB661E5C263_TypeDefinitionIndex)->GetStaticField(0x17A40);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Boolean>* Field_2_6; // 0x18
	::Class_1_2CAAA2FDF9170110* Field_2_4; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::StringHash>* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::System::String*>*>* Field_2_9; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::UInt32>* Field_2_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::GameEntityList*>* Field_2_8; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*>* Field_2_11; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_3<::RPG::GameCore::StringHash, ::Class_2_90C3FAB661E5C263_ReferenceType, ::Class_2_90C3FAB661E5C263_ReferenceSource>>* Field_2_1; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicJsonConfig*>* Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263__CCTOR_OFFSET))();
	}

	::System::Void Method_2_8691C17EC356A1A1(::RPG::GameCore::StringHash a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8691C17EC356A1A1_1(::RPG::GameCore::StringHash a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_912CD6A43BF0D575(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_912CD6A43BF0D575_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9873EE85585D09C9(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_9873EE85585D09C9_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_988EE78A892C77F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_988EE78A892C77F3_OFFSET))(a1);
	}

	::System::Void Method_2_AAB4AB00F32325E7(::System::String* a1, ::Class_2_90C3FAB661E5C263_ReferenceType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_90C3FAB661E5C263_ReferenceType))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_AAB4AB00F32325E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_146C3E7311763B1B(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_146C3E7311763B1B_OFFSET))(this, a1, a2);
	}

	static ::System::ValueTuple_2<::Class_2_90C3FAB661E5C263_ReferenceSource, ::System::String*> Method_2_A546BF9AF16A6444(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::Class_2_90C3FAB661E5C263_ReferenceSource, ::System::String*>(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_A546BF9AF16A6444_OFFSET))(a1);
	}

	::System::Void Method_2_B3D8C24A1997E8EF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_B3D8C24A1997E8EF_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_DISPOSE_OFFSET))(this);
	}
};
