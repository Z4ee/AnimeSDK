#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_301DCAC3D7B2DD34_METHOD_1_2547181A9D5D9FA5_OFFSET UNITYSDK_OFFSET(0x11B88030)
#define CLASS_1_301DCAC3D7B2DD34_METHOD_1_AF4A3BC093299516_OFFSET UNITYSDK_OFFSET(0x11B87C90)
#define CLASS_1_301DCAC3D7B2DD34_METHOD_1_B0477DCBC1EE3A9F_OFFSET UNITYSDK_OFFSET(0x11B87D10)
#define CLASS_1_301DCAC3D7B2DD34__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B889D0)

inline static constexpr unsigned int Class_1_301DCAC3D7B2DD34_TypeDefinitionIndex = 50009;

class Class_1_301DCAC3D7B2DD34 : public ::System::Object
{
public:
	static ::RPG::GameCore::IVec2* StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_301DCAC3D7B2DD34_TypeDefinitionIndex)->GetStaticField(0x2650);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_301DCAC3D7B2DD34_TypeDefinitionIndex)->GetStaticField(0x2658);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_301DCAC3D7B2DD34_TypeDefinitionIndex)->GetStaticField(0x2660);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_301DCAC3D7B2DD34__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AF4A3BC093299516(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_301DCAC3D7B2DD34_METHOD_1_AF4A3BC093299516_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixVec2 Method_1_B0477DCBC1EE3A9F(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_301DCAC3D7B2DD34_METHOD_1_B0477DCBC1EE3A9F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::IVec2 Method_1_2547181A9D5D9FA5(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_301DCAC3D7B2DD34_METHOD_1_2547181A9D5D9FA5_OFFSET))(a1, a2);
	}
};
