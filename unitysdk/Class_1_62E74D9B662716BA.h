#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ERoadRashBlurChannel.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ERoadRashFOVChannel.h"
#include "unitysdk/RPG/Client/RoadRash/ERoadRashImpactShakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1C2050595DE2732C;
class Class_1_43BD383C98B4C0C5_44;
class Class_2_230F5EDDB35DAEBA;
class Class_2_8D31566281692B25;
class Class_3_CD59F26A5F0E803D;
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_62E74D9B662716BA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16409B30)
#define CLASS_1_62E74D9B662716BA_METHOD_1_1788B75C260A65DD_OFFSET UNITYSDK_OFFSET(0x1640A200)
#define CLASS_1_62E74D9B662716BA_METHOD_1_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x1640BD60)
#define CLASS_1_62E74D9B662716BA_METHOD_1_3DB411AB5E5F9E89_OFFSET UNITYSDK_OFFSET(0x1640A100)
#define CLASS_1_62E74D9B662716BA_METHOD_1_3E956564B24960ED_OFFSET UNITYSDK_OFFSET(0x1640AD30)
#define CLASS_1_62E74D9B662716BA_METHOD_1_410BF331ADE28AF7_OFFSET UNITYSDK_OFFSET(0x1640BA60)
#define CLASS_1_62E74D9B662716BA_METHOD_1_41C1FC6E4D1E9C4E_OFFSET UNITYSDK_OFFSET(0x1640B910)
#define CLASS_1_62E74D9B662716BA_METHOD_1_478030B8C4B1B479_OFFSET UNITYSDK_OFFSET(0x1640A5A0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_4D375196D68219F1_OFFSET UNITYSDK_OFFSET(0x1640AA70)
#define CLASS_1_62E74D9B662716BA_METHOD_1_4EBD3D47FEC0DA5B_OFFSET UNITYSDK_OFFSET(0x1640B990)
#define CLASS_1_62E74D9B662716BA_METHOD_1_5B700BE685E81ECF_OFFSET UNITYSDK_OFFSET(0x16409E60)
#define CLASS_1_62E74D9B662716BA_METHOD_1_6AFBD4F68D10DFEE_OFFSET UNITYSDK_OFFSET(0x16409DD0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_6EC6C06B307A744D_1_OFFSET UNITYSDK_OFFSET(0x1640A4A0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_6EC6C06B307A744D_OFFSET UNITYSDK_OFFSET(0x1640A430)
#define CLASS_1_62E74D9B662716BA_METHOD_1_75F5425B66BB291B_OFFSET UNITYSDK_OFFSET(0x1640B520)
#define CLASS_1_62E74D9B662716BA_METHOD_1_90363258BD0E6621_OFFSET UNITYSDK_OFFSET(0x1640A2F0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_939CDD7469521ADD_OFFSET UNITYSDK_OFFSET(0x1640B1B0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_9A79A23BFC20E94A_OFFSET UNITYSDK_OFFSET(0x1640B6B0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_AA5CCEBF3722C000_OFFSET UNITYSDK_OFFSET(0x1640AF00)
#define CLASS_1_62E74D9B662716BA_METHOD_1_BD4DE45D2142674D_OFFSET UNITYSDK_OFFSET(0x16409F50)
#define CLASS_1_62E74D9B662716BA_METHOD_1_DD4C99F8641F3559_OFFSET UNITYSDK_OFFSET(0x1640A510)
#define CLASS_1_62E74D9B662716BA_METHOD_1_DF7F6F5A41B9E1F4_OFFSET UNITYSDK_OFFSET(0x16409BD0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x1640A3D0)
#define CLASS_1_62E74D9B662716BA_METHOD_1_F03968037415D73F_OFFSET UNITYSDK_OFFSET(0x16409C30)
#define CLASS_1_62E74D9B662716BA__CTOR_OFFSET UNITYSDK_OFFSET(0x16409A80)

inline static constexpr unsigned int Class_1_62E74D9B662716BA_TypeDefinitionIndex = 75509;

class Class_1_62E74D9B662716BA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::RoadRash::ERoadRashImpactShakeType, ::System::Single>* EECHAOBGDOJ; // 0x10
	::Class_2_8D31566281692B25* FKINCGODJEP; // 0x18
	::Class_3_CD59F26A5F0E803D* ADJNOFMEIKM; // 0x20

	::System::Void _ctor(::Class_2_8D31566281692B25* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8D31566281692B25*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DF7F6F5A41B9E1F4(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_DF7F6F5A41B9E1F4_OFFSET))(this, a1);
	}

	::Class_2_230F5EDDB35DAEBA* Method_1_F03968037415D73F(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_F03968037415D73F_OFFSET))(this, a1);
	}

	::Class_2_230F5EDDB35DAEBA* Method_1_6AFBD4F68D10DFEE(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_6AFBD4F68D10DFEE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B700BE685E81ECF(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_5B700BE685E81ECF_OFFSET))(this, a1);
	}

	::Class_2_230F5EDDB35DAEBA* Method_1_BD4DE45D2142674D()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_BD4DE45D2142674D_OFFSET))(this);
	}

	::System::Void Method_1_3DB411AB5E5F9E89(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_3DB411AB5E5F9E89_OFFSET))(this, a1);
	}

	::System::Void Method_1_90363258BD0E6621(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_90363258BD0E6621_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6EC6C06B307A744D(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_6EC6C06B307A744D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EC6C06B307A744D_1(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_6EC6C06B307A744D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD4C99F8641F3559(::Class_2_230F5EDDB35DAEBA* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_DD4C99F8641F3559_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_478030B8C4B1B479(::UnityEngine::Vector2& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_478030B8C4B1B479_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D375196D68219F1(::Class_2_230F5EDDB35DAEBA* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_4D375196D68219F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E956564B24960ED(::Class_2_230F5EDDB35DAEBA* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_3E956564B24960ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_939CDD7469521ADD(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_939CDD7469521ADD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_75F5425B66BB291B(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::System::Single a7, ::System::Single a8, ::System::Int32 a9)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_75F5425B66BB291B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_41C1FC6E4D1E9C4E(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::ERoadRashFOVChannel, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_41C1FC6E4D1E9C4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_9A79A23BFC20E94A(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_9A79A23BFC20E94A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4EBD3D47FEC0DA5B(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::Client::LittleGame::RoadRash::ERoadRashBlurChannel))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_4EBD3D47FEC0DA5B_OFFSET))(this, a1, a2);
	}

	::Class_1_1C2050595DE2732C* Method_1_AA5CCEBF3722C000(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::Class_1_1C2050595DE2732C*(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_AA5CCEBF3722C000_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_43BD383C98B4C0C5_44* a1)
	{
		return ((::System::Void(*)(::Class_1_43BD383C98B4C0C5_44*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}

	::System::Boolean Method_1_1788B75C260A65DD(::Class_2_230F5EDDB35DAEBA* a1, ::Class_1_43BD383C98B4C0C5_44*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_1_43BD383C98B4C0C5_44*&))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_1788B75C260A65DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_410BF331ADE28AF7(::RPG::Client::RoadRash::ERoadRashImpactShakeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::ERoadRashImpactShakeType))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_410BF331ADE28AF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2368DFE07F28F7DA(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_1_62E74D9B662716BA_METHOD_1_2368DFE07F28F7DA_OFFSET))(this, a1);
	}
};
