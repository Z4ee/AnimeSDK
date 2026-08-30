#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/SaveCharacterStateMask.h"

class Class_1_74F7ACE84D01A3D2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_913AFC89B668EDAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A38F60)
#define CLASS_2_913AFC89B668EDAD_METHOD_2_0986DD780EA17E2F_OFFSET UNITYSDK_OFFSET(0x15A39470)
#define CLASS_2_913AFC89B668EDAD_METHOD_2_87746BCE1AAADD0D_OFFSET UNITYSDK_OFFSET(0x15A39350)
#define CLASS_2_913AFC89B668EDAD_METHOD_2_D31158F0CD6D711E_OFFSET UNITYSDK_OFFSET(0x15A395A0)
#define CLASS_2_913AFC89B668EDAD_METHOD_2_EA5E4B8F3E0E69D8_OFFSET UNITYSDK_OFFSET(0x15A39110)
#define CLASS_2_913AFC89B668EDAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A39680)

inline static constexpr unsigned int Class_2_913AFC89B668EDAD_TypeDefinitionIndex = 57135;

class Class_2_913AFC89B668EDAD : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_74F7ACE84D01A3D2*>* PIGEDCGOCHF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913AFC89B668EDAD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_913AFC89B668EDAD_DISPOSE_OFFSET))(this);
	}

	::Class_1_74F7ACE84D01A3D2* Method_2_EA5E4B8F3E0E69D8(::System::String* a1, ::RPG::GameCore::SaveCharacterStateMask a2, ::RPG::GameCore::EnumStatusTypeMask a3)
	{
		return ((::Class_1_74F7ACE84D01A3D2*(*)(::PVOID, ::System::String*, ::RPG::GameCore::SaveCharacterStateMask, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + CLASS_2_913AFC89B668EDAD_METHOD_2_EA5E4B8F3E0E69D8_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_74F7ACE84D01A3D2* Method_2_87746BCE1AAADD0D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_74F7ACE84D01A3D2*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_913AFC89B668EDAD_METHOD_2_87746BCE1AAADD0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0986DD780EA17E2F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_913AFC89B668EDAD_METHOD_2_0986DD780EA17E2F_OFFSET))(this, a1);
	}

	::Class_1_74F7ACE84D01A3D2* Method_2_D31158F0CD6D711E(::System::String* a1)
	{
		return ((::Class_1_74F7ACE84D01A3D2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_913AFC89B668EDAD_METHOD_2_D31158F0CD6D711E_OFFSET))(this, a1);
	}
};
