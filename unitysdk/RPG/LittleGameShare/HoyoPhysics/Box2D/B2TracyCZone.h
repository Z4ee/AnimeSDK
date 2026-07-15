#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TracyCZone_TypeDefinitionIndex = 35245;

	enum class B2TracyCZone : ::System::Int32
	{
		pair_task = 0,
		update_pairs = 1,
		create_contacts = 2,
		prepare_overflow_contact = 3,
		warmstart_overflow_contact = 4,
		solve_contact = 5,
		overflow_resitution = 6,
		prepare_contact = 7,
		warm_start_contact = 8,
		restitution = 9,
		store_impulses = 10,
		merge_islands = 11,
		split = 12,
		sensor_task = 13,
		overlap_sensors = 14,
		sensor_state = 15,
		integrate_velocity = 16,
		prepare_joints = 17,
		warm_joints = 18,
		solve_joints = 19,
		integrate_positions = 20,
		ccd = 21,
		finalize_transfprms = 22,
		bullet_body_task = 23,
		merge = 24,
		prepare_stages = 25,
		solve_constraints = 26,
		update_transforms = 27,
		joint_events = 28,
		hit_events = 29,
		refit_bvh = 30,
		bullets = 31,
		sleep_islands = 32,
		collide_task = 33,
		tree_task = 34,
		collide = 35,
		contact_state = 36,
		world_step = 37,
		sensor_hits = 38,
	};
}
