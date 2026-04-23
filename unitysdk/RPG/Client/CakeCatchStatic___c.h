#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define RPG_CLIENT_CAKECATCHSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EDC820)
#define RPG_CLIENT_CAKECATCHSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EDC850)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x9EDC860)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_1_OFFSET UNITYSDK_OFFSET(0x9EDC8C0)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_2_OFFSET UNITYSDK_OFFSET(0x9EDC920)
#define RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_3_OFFSET UNITYSDK_OFFSET(0x9EDC980)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic___c_TypeDefinitionIndex = 58004;

	class CakeCatchStatic___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeCatchStatic___c** StaticGet___9()
		{
			return (::RPG::Client::CakeCatchStatic___c**)Il2CppClass::FromTypeDefinitionIndex(CakeCatchStatic___c_TypeDefinitionIndex)->GetStaticField(0x423C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __cctor_b__61_0(::RPG::GameCore::DynamicValue* v)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_0_OFFSET))(this, v);
		}

		::System::UInt32 __cctor_b__61_1(::RPG::GameCore::DynamicValue* v)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_1_OFFSET))(this, v);
		}

		::System::UInt32 __cctor_b__61_2(::RPG::GameCore::DynamicValue* v)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_2_OFFSET))(this, v);
		}

		::System::UInt32 __cctor_b__61_3(::RPG::GameCore::DynamicValue* v)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC___C___CCTOR_B__61_3_OFFSET))(this, v);
		}
	};
}
