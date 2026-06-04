#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeType.h"
#include "unitysdk/System/Object.h"

class Class_1_26684305CEECE64E;
class Class_1_3E663F02593BDAF0;
class Class_2_21AD365C113DC484;
class Class_2_2EBAC67816CBA1E1;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceAoeConfig; }

#define CLASS_1_10FBE4EC5D80EE6D_METHOD_1_04F9D05B457B0559_OFFSET UNITYSDK_OFFSET(0x18A9B0B0)
#define CLASS_1_10FBE4EC5D80EE6D_METHOD_1_0B29F42E14876FA9_OFFSET UNITYSDK_OFFSET(0x18A9B200)
#define CLASS_1_10FBE4EC5D80EE6D_METHOD_1_2683D7A71627366A_OFFSET UNITYSDK_OFFSET(0x18A9B020)

inline static constexpr unsigned int Class_1_10FBE4EC5D80EE6D_TypeDefinitionIndex = 34881;

class Class_1_10FBE4EC5D80EE6D : public ::System::Object
{
public:
	static ::Class_2_2EBAC67816CBA1E1* Method_1_2683D7A71627366A(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::RPG::GameCore::CakeRaceAoeConfig* a3, ::Class_1_3E663F02593BDAF0* a4)
	{
		return ((::Class_2_2EBAC67816CBA1E1*(*)(::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::RPG::GameCore::CakeRaceAoeConfig*, ::Class_1_3E663F02593BDAF0*))((::PBYTE)hIl2Cpp + CLASS_1_10FBE4EC5D80EE6D_METHOD_1_2683D7A71627366A_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_2EBAC67816CBA1E1* Method_1_04F9D05B457B0559(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::RPG::GameCore::CakeRaceAoeShowType a3, ::RPG::GameCore::CakeRaceAoeType a4, ::Class_1_3E663F02593BDAF0* a5, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a6, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a7)
	{
		return ((::Class_2_2EBAC67816CBA1E1*(*)(::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::RPG::GameCore::CakeRaceAoeShowType, ::RPG::GameCore::CakeRaceAoeType, ::Class_1_3E663F02593BDAF0*, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*))((::PBYTE)hIl2Cpp + CLASS_1_10FBE4EC5D80EE6D_METHOD_1_04F9D05B457B0559_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Il2CppArray<::Class_1_26684305CEECE64E*>* Method_1_0B29F42E14876FA9(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Il2CppArray<::Class_1_26684305CEECE64E*>*(*)(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_10FBE4EC5D80EE6D_METHOD_1_0B29F42E14876FA9_OFFSET))(a1, a2);
	}
};
