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

#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_23841F75B879070A_OFFSET UNITYSDK_OFFSET(0x11BC1520)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_509D0A2762DD2E7F_OFFSET UNITYSDK_OFFSET(0x11BC1680)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_529FAC71ABD39274_OFFSET UNITYSDK_OFFSET(0x11BC1DB0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_664222BCF379D634_OFFSET UNITYSDK_OFFSET(0x11BC1380)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_69B9BDF88ECD47B5_OFFSET UNITYSDK_OFFSET(0x11BC1C50)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_7ABDB36F72EF60B7_OFFSET UNITYSDK_OFFSET(0x11BB9DB0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_7C3A6829183D79A6_OFFSET UNITYSDK_OFFSET(0x11BC15E0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_91C638630F1EEE79_OFFSET UNITYSDK_OFFSET(0x11BC1D20)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_A48996EAFBC0AF59_OFFSET UNITYSDK_OFFSET(0x11BC13F0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_A57E2D2AA32FD673_OFFSET UNITYSDK_OFFSET(0x11BC19E0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_B2CFBFE46A09C61D_OFFSET UNITYSDK_OFFSET(0x11BC1AC0)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_B7E4C6F0A2CCED74_OFFSET UNITYSDK_OFFSET(0x11BC1750)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_BF93C93F570E4D30_OFFSET UNITYSDK_OFFSET(0x11BC1E30)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_DEE90D3447555A55_OFFSET UNITYSDK_OFFSET(0x11BC1470)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_DFD544BC3B202568_OFFSET UNITYSDK_OFFSET(0x11BC1890)
#define CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x11BC1CB0)
#define CLASS_1_FB5E0FC2D0ADD3EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BC1F50)
#define CLASS_1_FB5E0FC2D0ADD3EC__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC1F40)

inline static constexpr unsigned int Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex = 54444;

class Class_1_FB5E0FC2D0ADD3EC : public ::System::Object
{
public:
	static ::RPG::MVector3* StaticGet_Field_1_7()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x6720);
	}
	static ::System::Guid* StaticGet_Field_1_8()
	{
		return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x672C);
	}
	static ::System::Single* StaticGet_Field_1_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x673C);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_11()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB5E0FC2D0ADD3EC_TypeDefinitionIndex)->GetStaticField(0x6740);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xFFFFFFFF; // 0x0
	// static const ::System::UInt32 Field_1_4 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_5 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_6 = 0xFFFFFFFF; // 0x0
	// static const ::System::UInt32 Field_1_10 = 0x0; // 0x0

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

	static ::System::Boolean Method_1_7ABDB36F72EF60B7(::RPG::GameCore::CompareType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_7ABDB36F72EF60B7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_DEE90D3447555A55(::RPG::GameCore::CompareType a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_DEE90D3447555A55_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_23841F75B879070A(::RPG::GameCore::CompareType a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_23841F75B879070A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_7C3A6829183D79A6(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_7C3A6829183D79A6_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_509D0A2762DD2E7F(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_509D0A2762DD2E7F_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_B7E4C6F0A2CCED74(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_B7E4C6F0A2CCED74_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_DFD544BC3B202568(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_DFD544BC3B202568_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_A57E2D2AA32FD673(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_A57E2D2AA32FD673_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_B2CFBFE46A09C61D(::RPG::GameCore::NumOperationType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::NumOperationType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_FB5E0FC2D0ADD3EC_METHOD_1_B2CFBFE46A09C61D_OFFSET))(a1, a2, a3);
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
