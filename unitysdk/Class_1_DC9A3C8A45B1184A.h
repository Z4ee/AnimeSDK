#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E663F02593BDAF0;
class Class_1_DC9A3C8A45B1184A_Class_3_59976A118ED61ACD;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DC9A3C8A45B1184A_METHOD_1_9DF5F50DDC7F33E5_OFFSET UNITYSDK_OFFSET(0x17BDC340)
#define CLASS_1_DC9A3C8A45B1184A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BF3400)

inline static constexpr unsigned int Class_1_DC9A3C8A45B1184A_TypeDefinitionIndex = 34816;

class Class_1_DC9A3C8A45B1184A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_DC9A3C8A45B1184A_Class_3_59976A118ED61ACD*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_DC9A3C8A45B1184A_Class_3_59976A118ED61ACD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC9A3C8A45B1184A_TypeDefinitionIndex)->GetStaticField(0x6A080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC9A3C8A45B1184A__CCTOR_OFFSET))();
	}

	static ::Class_1_3E663F02593BDAF0* Method_1_9DF5F50DDC7F33E5(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_1_3E663F02593BDAF0*(*)(::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC9A3C8A45B1184A_METHOD_1_9DF5F50DDC7F33E5_OFFSET))(a1, a2, a3, a4);
	}
};
