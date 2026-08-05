#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_32D38A47E2A5ED82.h"
#include "unitysdk/Class_2_1AF58D2D7D5CC9BA_Enum_3_729350B9D008131E.h"

class Class_2_1AF58D2D7D5CC9BA_Class_2_6FFFF8A69AE2CF5E;
namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace MoleMole::Config { class SceneMapAreaRuntimeData; }
namespace MoleMole::Config { class SceneMapLayerRuntimeData; }
namespace MoleMole::Config { class SceneMapStateRuntimeData; }
namespace System { class String; }

#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_08596DA4F3819B58_OFFSET UNITYSDK_OFFSET(0x119BBBF0)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_179A9C1A149302E4_OFFSET UNITYSDK_OFFSET(0x119BB890)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_20A83777F5EEFBA2_OFFSET UNITYSDK_OFFSET(0x119BC310)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_4118FDDD91B1A6EA_1_OFFSET UNITYSDK_OFFSET(0x119BCDE0)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_4118FDDD91B1A6EA_OFFSET UNITYSDK_OFFSET(0x119BCAE0)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x119BB690)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_6780A35173F4C480_OFFSET UNITYSDK_OFFSET(0x119BB880)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_75CA2D9B6D0050D9_OFFSET UNITYSDK_OFFSET(0x119BB820)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x119BB6F0)
#define CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x119BB730)
#define CLASS_2_1AF58D2D7D5CC9BA__CTOR_OFFSET UNITYSDK_OFFSET(0x119BB770)

inline static constexpr unsigned int Class_2_1AF58D2D7D5CC9BA_TypeDefinitionIndex = 84938;

class Class_2_1AF58D2D7D5CC9BA : public ::Class_1_32D38A47E2A5ED82<::Class_2_1AF58D2D7D5CC9BA*>
{
public:
	::Class_2_1AF58D2D7D5CC9BA_Class_2_6FFFF8A69AE2CF5E* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Int32 Method_2_75CA2D9B6D0050D9(::Class_2_1AF58D2D7D5CC9BA_Enum_3_729350B9D008131E a1)
	{
		return ((::System::Int32(*)(::Class_2_1AF58D2D7D5CC9BA_Enum_3_729350B9D008131E))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_75CA2D9B6D0050D9_OFFSET))(a1);
	}

	::Class_2_1AF58D2D7D5CC9BA_Class_2_6FFFF8A69AE2CF5E* Method_2_6780A35173F4C480()
	{
		return ((::Class_2_1AF58D2D7D5CC9BA_Class_2_6FFFF8A69AE2CF5E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_6780A35173F4C480_OFFSET))(this);
	}

	static ::System::Boolean Method_2_179A9C1A149302E4(::MoleMole::Config::SceneConfigRuntimeData* a1, ::System::Int32 a2, ::MoleMole::Config::SceneMapLayerRuntimeData*& a3, ::MoleMole::Config::SceneMapAreaRuntimeData*& a4, ::MoleMole::Config::SceneMapStateRuntimeData*& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeData*, ::System::Int32, ::MoleMole::Config::SceneMapLayerRuntimeData*&, ::MoleMole::Config::SceneMapAreaRuntimeData*&, ::MoleMole::Config::SceneMapStateRuntimeData*&))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_179A9C1A149302E4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_2_08596DA4F3819B58(::MoleMole::Config::SceneConfigRuntimeData* a1, ::MoleMole::Config::SceneMapLayerRuntimeData*& a2, ::MoleMole::Config::SceneMapAreaRuntimeData*& a3, ::MoleMole::Config::SceneMapStateRuntimeData*& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeData*, ::MoleMole::Config::SceneMapLayerRuntimeData*&, ::MoleMole::Config::SceneMapAreaRuntimeData*&, ::MoleMole::Config::SceneMapStateRuntimeData*&))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_08596DA4F3819B58_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_20A83777F5EEFBA2(::MoleMole::Config::SceneConfigRuntimeData* a1, ::System::String* a2, ::MoleMole::Config::SceneMapLayerRuntimeData*& a3, ::MoleMole::Config::SceneMapAreaRuntimeData*& a4, ::MoleMole::Config::SceneMapStateRuntimeData*& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeData*, ::System::String*, ::MoleMole::Config::SceneMapLayerRuntimeData*&, ::MoleMole::Config::SceneMapAreaRuntimeData*&, ::MoleMole::Config::SceneMapStateRuntimeData*&))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_20A83777F5EEFBA2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_2_4118FDDD91B1A6EA(::MoleMole::Config::SceneConfigRuntimeData* a1, ::System::Int32 a2, ::MoleMole::Config::SceneMapLayerRuntimeData*& a3, ::MoleMole::Config::SceneMapAreaRuntimeData*& a4, ::MoleMole::Config::SceneMapStateRuntimeData*& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeData*, ::System::Int32, ::MoleMole::Config::SceneMapLayerRuntimeData*&, ::MoleMole::Config::SceneMapAreaRuntimeData*&, ::MoleMole::Config::SceneMapStateRuntimeData*&))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_4118FDDD91B1A6EA_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4118FDDD91B1A6EA_1(::MoleMole::Config::SceneConfigRuntimeData* a1, ::System::Int32 a2, ::MoleMole::Config::SceneMapLayerRuntimeData*& a3, ::MoleMole::Config::SceneMapAreaRuntimeData*& a4, ::MoleMole::Config::SceneMapStateRuntimeData*& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeData*, ::System::Int32, ::MoleMole::Config::SceneMapLayerRuntimeData*&, ::MoleMole::Config::SceneMapAreaRuntimeData*&, ::MoleMole::Config::SceneMapStateRuntimeData*&))((::PBYTE)hIl2Cpp + CLASS_2_1AF58D2D7D5CC9BA_METHOD_2_4118FDDD91B1A6EA_1_OFFSET))(a1, a2, a3, a4, a5);
	}
};
