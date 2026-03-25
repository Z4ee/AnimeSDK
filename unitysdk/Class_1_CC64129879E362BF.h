#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCheckSetStateResult.h"
#include "unitysdk/System/Object.h"

class Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6;
class Class_1_DD81253E160EB8B2;
namespace ParticleRecorder { class BackwardParticlesInfoSO; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindAttachEff; }
namespace System { class String; }

#define CLASS_1_CC64129879E362BF_METHOD_1_3C44D030C6350D38_OFFSET UNITYSDK_OFFSET(0x11049CE0)
#define CLASS_1_CC64129879E362BF_METHOD_1_893AC5DD5CF6F795_OFFSET UNITYSDK_OFFSET(0x11049C40)
#define CLASS_1_CC64129879E362BF_METHOD_1_91F9BF02B9BEE9DA_OFFSET UNITYSDK_OFFSET(0x1104A020)
#define CLASS_1_CC64129879E362BF_METHOD_1_AD52119E0AD66D16_OFFSET UNITYSDK_OFFSET(0x1104A290)
#define CLASS_1_CC64129879E362BF_METHOD_1_E79FA525758F58AD_OFFSET UNITYSDK_OFFSET(0x11049B80)

inline static constexpr unsigned int Class_1_CC64129879E362BF_TypeDefinitionIndex = 49314;

class Class_1_CC64129879E362BF : public ::System::Object
{
public:
	static ::ParticleRecorder::BackwardParticlesInfoSO* Method_1_E79FA525758F58AD(::System::String* a1)
	{
		return ((::ParticleRecorder::BackwardParticlesInfoSO*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_E79FA525758F58AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_893AC5DD5CF6F795(::RPG::Client::TimeRewindCheckSetStateResult a1)
	{
		return ((::System::Void(*)(::RPG::Client::TimeRewindCheckSetStateResult))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_893AC5DD5CF6F795_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C44D030C6350D38(::RPG::GameCore::TimeRewindAttachEff* a1, ::Class_1_DD81253E160EB8B2* a2, ::RPG::GameCore::GameEntity* a3, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::TimeRewindAttachEff*, ::Class_1_DD81253E160EB8B2*, ::RPG::GameCore::GameEntity*, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_3C44D030C6350D38_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_91F9BF02B9BEE9DA(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* a1, ::Il2CppArray<::Class_1_DD81253E160EB8B2*>*& a2, ::RPG::GameCore::GameEntity* a3, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>*, ::Il2CppArray<::Class_1_DD81253E160EB8B2*>*&, ::RPG::GameCore::GameEntity*, ::Class_1_CC64129879E362BF_Class_1_F430351B57E59FB6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_91F9BF02B9BEE9DA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AD52119E0AD66D16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC64129879E362BF_METHOD_1_AD52119E0AD66D16_OFFSET))(a1);
	}
};
