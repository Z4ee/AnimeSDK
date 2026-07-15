#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/System/Object.h"

class Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6;
class Class_1_E45C207B1AC948BE;
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindAttachEff; }
namespace System { class String; }

#define CLASS_1_CC64129879E362BF_METHOD_1_39BBD3ABE8557CBD_OFFSET UNITYSDK_OFFSET(0x15F972F0)
#define CLASS_1_CC64129879E362BF_METHOD_1_3C44D030C6350D38_OFFSET UNITYSDK_OFFSET(0x15F96D60)
#define CLASS_1_CC64129879E362BF_METHOD_1_8DA63FF6BAB40ABF_OFFSET UNITYSDK_OFFSET(0x15F970A0)
#define CLASS_1_CC64129879E362BF_METHOD_1_E79FA525758F58AD_OFFSET UNITYSDK_OFFSET(0x15F96C00)
#define CLASS_1_CC64129879E362BF_METHOD_1_EED1D83F157A2E3E_OFFSET UNITYSDK_OFFSET(0x15F96CC0)

inline static constexpr unsigned int Class_1_CC64129879E362BF_TypeDefinitionIndex = 58120;

class Class_1_CC64129879E362BF : public ::System::Object
{
public:
	static ::ParticleRecorder::BackwardParticlesInfoSO* Method_1_E79FA525758F58AD(::System::String* a1)
	{
		return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_E79FA525758F58AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_EED1D83F157A2E3E(::RPG::Client::TimeRewindCheckSetStateResult a1)
	{
		return ((::System::Void(*)(::RPG::Client::TimeRewindCheckSetStateResult))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_EED1D83F157A2E3E_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C44D030C6350D38(::RPG::GameCore::TimeRewindAttachEff* a1, ::Class_1_E45C207B1AC948BE* a2, ::RPG::GameCore::GameEntity* a3, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::TimeRewindAttachEff*, ::Class_1_E45C207B1AC948BE*, ::RPG::GameCore::GameEntity*, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_3C44D030C6350D38_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_8DA63FF6BAB40ABF(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* a1, ::Il2CppArray<::Class_1_E45C207B1AC948BE*>*& a2, ::RPG::GameCore::GameEntity* a3, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>*, ::Il2CppArray<::Class_1_E45C207B1AC948BE*>*&, ::RPG::GameCore::GameEntity*, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_8DA63FF6BAB40ABF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_39BBD3ABE8557CBD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_39BBD3ABE8557CBD_OFFSET))(a1);
	}
};
