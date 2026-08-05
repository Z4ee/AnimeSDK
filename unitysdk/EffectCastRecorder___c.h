#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFFECTCASTRECORDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1489E1C0)
#define EFFECTCASTRECORDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1489E200)
#define EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_0_OFFSET UNITYSDK_OFFSET(0x1489E210)
#define EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_1_OFFSET UNITYSDK_OFFSET(0x1489E260)
#define EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_2_OFFSET UNITYSDK_OFFSET(0x1489E270)

inline static constexpr unsigned int EffectCastRecorder___c_TypeDefinitionIndex = 51836;

class EffectCastRecorder___c : public ::System::Object
{
public:
	static ::EffectCastRecorder___c** StaticGet___9()
	{
		return (::EffectCastRecorder___c**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x34FE0);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::Class_3_D6DA183EF60F02C8*>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::Class_3_D6DA183EF60F02C8*>**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x34FE8);
	}
	static ::System::Func_2<::Class_3_D6DA183EF60F02C8*, ::System::Boolean>** StaticGet___9__18_1()
	{
		return (::System::Func_2<::Class_3_D6DA183EF60F02C8*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x34FF0);
	}
	static ::System::Func_2<::Class_3_D6DA183EF60F02C8*, ::Foundation::AssetPath>** StaticGet___9__18_2()
	{
		return (::System::Func_2<::Class_3_D6DA183EF60F02C8*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x34FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__CTOR_OFFSET))(this);
	}

	::Class_3_D6DA183EF60F02C8* _WriteFileIfNeed_b__18_0(::MoleMole::Battle::Entity* e)
	{
		return ((::Class_3_D6DA183EF60F02C8*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_0_OFFSET))(this, e);
	}

	::System::Boolean _WriteFileIfNeed_b__18_1(::Class_3_D6DA183EF60F02C8* c)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_1_OFFSET))(this, c);
	}

	::Foundation::AssetPath _WriteFileIfNeed_b__18_2(::Class_3_D6DA183EF60F02C8* c)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_2_OFFSET))(this, c);
	}
};
