#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3B1EA953A4067E26_2;
class Class_1_43BD383C98B4C0C5_101;
class Class_1_5F1329F544AC1AFF;
class Class_1_6E6FEE1E26FFD7A8;
class Class_1_7807B2B04302CD7B_20;
class Class_1_D15D83CB948FC3A0;
class Class_1_D2C97E5E9F60802E;
class Class_2_68CB91321C3E76A7;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::PixAir { class BasePixAirView; }
namespace RPG::GameCore { class PixAirCastCondition; }
namespace RPG::GameCore { class PixAirSkillConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9BB05DF80D1274B8_METHOD_1_0002E430DF898D41_OFFSET UNITYSDK_OFFSET(0xD190970)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_06303B5A2D031555_OFFSET UNITYSDK_OFFSET(0xD1928D0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_13F78F0C20DBC299_OFFSET UNITYSDK_OFFSET(0xD1912D0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_1CF6A8AC8E67F844_OFFSET UNITYSDK_OFFSET(0xD191A50)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_221C7E5366654C8D_OFFSET UNITYSDK_OFFSET(0xD192FF0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_22A58254DB2096CC_OFFSET UNITYSDK_OFFSET(0xD1935B0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_321640EEFDFC8593_OFFSET UNITYSDK_OFFSET(0xD192BF0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_37B71E79923D4288_OFFSET UNITYSDK_OFFSET(0xD192100)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_4F9A2334FEA84FBB_OFFSET UNITYSDK_OFFSET(0xD191990)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_6BCA9D9B7A40C4CF_OFFSET UNITYSDK_OFFSET(0xD18FD00)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xD193150)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_8290F4FEF8F897D3_OFFSET UNITYSDK_OFFSET(0xD192340)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_9AB69E062DF8C8C9_OFFSET UNITYSDK_OFFSET(0xD193270)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_A6A2D17A0E9E1A79_OFFSET UNITYSDK_OFFSET(0xD191090)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_B0310F513E67B2F6_OFFSET UNITYSDK_OFFSET(0xD191E30)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_B3FF1AB6C4CB9171_OFFSET UNITYSDK_OFFSET(0xD1926E0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_BABF40084C97A8D9_OFFSET UNITYSDK_OFFSET(0xD18F9F0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_BBA69ABD6838E6D2_OFFSET UNITYSDK_OFFSET(0xD193450)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0xD193840)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_D176C46089B5925D_OFFSET UNITYSDK_OFFSET(0xD1938F0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_DA1621F280EC570F_OFFSET UNITYSDK_OFFSET(0xD18F020)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_DE28AFC571DD66CA_OFFSET UNITYSDK_OFFSET(0xD191840)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_E25661FC93EA9D8B_OFFSET UNITYSDK_OFFSET(0xD190AC0)
#define CLASS_1_9BB05DF80D1274B8_METHOD_1_E855A974FE0C8866_OFFSET UNITYSDK_OFFSET(0xD1937A0)
#define CLASS_1_9BB05DF80D1274B8__CTOR_OFFSET UNITYSDK_OFFSET(0xD18EEE0)

inline static constexpr unsigned int Class_1_9BB05DF80D1274B8_TypeDefinitionIndex = 71828;

class Class_1_9BB05DF80D1274B8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x1E; // 0x0
	::Class_1_D15D83CB948FC3A0* Field_1_1; // 0x10
	::Class_1_3B1EA953A4067E26_2* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_4; // 0x28
	::System::Collections::Generic::LinkedList_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* Field_1_5; // 0x30

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_1_D15D83CB948FC3A0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_1_D15D83CB948FC3A0*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_68CB91321C3E76A7* Method_1_DA1621F280EC570F(::Class_1_6E6FEE1E26FFD7A8* a1)
	{
		return ((::Class_2_68CB91321C3E76A7*(*)(::PVOID, ::Class_1_6E6FEE1E26FFD7A8*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_DA1621F280EC570F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0002E430DF898D41(::Il2CppArray<::Class_1_7807B2B04302CD7B_20*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_7807B2B04302CD7B_20*>*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_0002E430DF898D41_OFFSET))(this, a1);
	}

	::Class_2_68CB91321C3E76A7* Method_1_6BCA9D9B7A40C4CF(::Class_1_43BD383C98B4C0C5_101* a1, ::Class_2_68CB91321C3E76A7* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::Class_2_68CB91321C3E76A7*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_101*, ::Class_2_68CB91321C3E76A7*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_6BCA9D9B7A40C4CF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_13F78F0C20DBC299(::Class_1_43BD383C98B4C0C5_101* a1, ::Class_2_68CB91321C3E76A7* a2, ::Class_2_68CB91321C3E76A7* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_101*, ::Class_2_68CB91321C3E76A7*, ::Class_2_68CB91321C3E76A7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_13F78F0C20DBC299_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_D2C97E5E9F60802E* Method_1_A6A2D17A0E9E1A79(::Class_1_5F1329F544AC1AFF* a1, ::Class_2_68CB91321C3E76A7* a2)
	{
		return ((::Class_1_D2C97E5E9F60802E*(*)(::PVOID, ::Class_1_5F1329F544AC1AFF*, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_A6A2D17A0E9E1A79_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PixAirCastCondition* Method_1_4F9A2334FEA84FBB(::RPG::GameCore::PixAirSkillConfig* a1)
	{
		return ((::RPG::GameCore::PixAirCastCondition*(*)(::PVOID, ::RPG::GameCore::PixAirSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_4F9A2334FEA84FBB_OFFSET))(this, a1);
	}

	::Class_2_68CB91321C3E76A7* Method_1_1CF6A8AC8E67F844(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Action* a4, ::UnityEngine::Vector3 a5, ::System::String* a6, ::System::String* a7, ::System::Single a8)
	{
		return ((::Class_2_68CB91321C3E76A7*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action*, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_1CF6A8AC8E67F844_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_8290F4FEF8F897D3(::RPG::Client::MonoEffect* a1, ::Class_2_68CB91321C3E76A7* a2, ::System::Int32 a3, ::System::String* a4, ::System::Single a5, ::System::UInt32 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::Class_2_68CB91321C3E76A7*, ::System::Int32, ::System::String*, ::System::Single, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_8290F4FEF8F897D3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_2_68CB91321C3E76A7* Method_1_321640EEFDFC8593(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::Class_2_68CB91321C3E76A7*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_321640EEFDFC8593_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_06303B5A2D031555(::RPG::Client::LittleGame::PixAir::BasePixAirView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::BasePixAirView*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_06303B5A2D031555_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_9AB69E062DF8C8C9(::RPG::Client::LittleGame::PixAir::BasePixAirView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::BasePixAirView*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_9AB69E062DF8C8C9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_B0310F513E67B2F6(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_B0310F513E67B2F6_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_221C7E5366654C8D(::System::Int32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_221C7E5366654C8D_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_BBA69ABD6838E6D2(::System::Int32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_BBA69ABD6838E6D2_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_B3FF1AB6C4CB9171(::System::Int32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_B3FF1AB6C4CB9171_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_37B71E79923D4288(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_37B71E79923D4288_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_22A58254DB2096CC(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_22A58254DB2096CC_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_DE28AFC571DD66CA(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_DE28AFC571DD66CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BABF40084C97A8D9(::Class_1_6E6FEE1E26FFD7A8* a1, ::Class_2_68CB91321C3E76A7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E6FEE1E26FFD7A8*, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_BABF40084C97A8D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E855A974FE0C8866()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_E855A974FE0C8866_OFFSET))(this);
	}

	::System::Void Method_1_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_1_D176C46089B5925D(::System::Collections::Generic::Queue_1<::Class_1_6E6FEE1E26FFD7A8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::Class_1_6E6FEE1E26FFD7A8*>*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_D176C46089B5925D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E25661FC93EA9D8B(::Class_2_68CB91321C3E76A7* a1, ::Class_1_6E6FEE1E26FFD7A8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_68CB91321C3E76A7*, ::Class_1_6E6FEE1E26FFD7A8*))((::PBYTE)hIl2Cpp + CLASS_1_9BB05DF80D1274B8_METHOD_1_E25661FC93EA9D8B_OFFSET))(this, a1, a2);
	}
};
