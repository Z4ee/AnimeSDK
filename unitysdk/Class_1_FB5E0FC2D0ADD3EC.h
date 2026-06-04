#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_38B626F970688CCD;
namespace System { class String; }

#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_0140BBF9DD0138E3_OFFSET UNITYSDK_OFFSET(0x142F2DB0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_19A2A4AB4251AD48_OFFSET UNITYSDK_OFFSET(0x142F2EC0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_1BB9E3011EADDA6B_OFFSET UNITYSDK_OFFSET(0x142F2BE0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_23841F75B879070A_OFFSET UNITYSDK_OFFSET(0x142F2880)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_2D54721BE7779E27_OFFSET UNITYSDK_OFFSET(0x142F2940)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_529FAC71ABD39274_OFFSET UNITYSDK_OFFSET(0x142F3150)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_664222BCF379D634_OFFSET UNITYSDK_OFFSET(0x142F2450)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_69B9BDF88ECD47B5_OFFSET UNITYSDK_OFFSET(0x142F2FF0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_91C638630F1EEE79_OFFSET UNITYSDK_OFFSET(0x142F30C0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_A48996EAFBC0AF59_OFFSET UNITYSDK_OFFSET(0x142F24C0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_BF93C93F570E4D30_OFFSET UNITYSDK_OFFSET(0x142F31D0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_C363F4FD862A9AC6_OFFSET UNITYSDK_OFFSET(0x142F2D40)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_D11636C6BF6D79A2_OFFSET UNITYSDK_OFFSET(0x142F2A90)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_D423291144A4CA49_OFFSET UNITYSDK_OFFSET(0x142F2540)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_DEE90D3447555A55_OFFSET UNITYSDK_OFFSET(0x142F27D0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x142F3050)
#define CLASS_1_FB5E0FC2D0ADD3EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x142F32F0)
#define CLASS_1_FB5E0FC2D0ADD3EC__CTOR_OFFSET UNITYSDK_OFFSET(0x142F32E0)

inline static constexpr unsigned int Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex = 55171;

class Class_1_FB5E0FC2D0ADD3EC : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x9A50);
	}
	static ::RPG::MVector3* StaticGet_Field_1_1()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x9A54);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x9A60);
	}
	static ::System::Guid* StaticGet_Field_1_3()
	{
		return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x9A68);
	}
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xFFFFFFFF; // 0x0
	// static const ::System::UInt32 Field_1_8 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_9 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_10 = 0xFFFFFFFF; // 0x0
	// static const ::System::UInt32 Field_1_11 = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_664222BCF379D634(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_664222BCF379D634_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A48996EAFBC0AF59(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_A48996EAFBC0AF59_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D423291144A4CA49(::RPG::GameCore::CompareType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_D423291144A4CA49_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_DEE90D3447555A55(::RPG::GameCore::CompareType a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_DEE90D3447555A55_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_23841F75B879070A(::RPG::GameCore::CompareType a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_23841F75B879070A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_2D54721BE7779E27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_2D54721BE7779E27_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_D11636C6BF6D79A2(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_D11636C6BF6D79A2_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_1BB9E3011EADDA6B(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_1BB9E3011EADDA6B_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_C363F4FD862A9AC6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_C363F4FD862A9AC6_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_0140BBF9DD0138E3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_0140BBF9DD0138E3_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_19A2A4AB4251AD48(::RPG::GameCore::NumOperationType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::NumOperationType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_19A2A4AB4251AD48_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_69B9BDF88ECD47B5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_69B9BDF88ECD47B5_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_FD1EFD5A6E481F5B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_FD1EFD5A6E481F5B_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_91C638630F1EEE79(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_91C638630F1EEE79_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_529FAC71ABD39274(::Class_1_38B626F970688CCD* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::Class_1_38B626F970688CCD*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_529FAC71ABD39274_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_BF93C93F570E4D30(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_BF93C93F570E4D30_OFFSET))(a1, a2, a3);
	}
};
